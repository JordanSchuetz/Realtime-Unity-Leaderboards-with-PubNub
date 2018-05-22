using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PubNubAPI;
using UnityEngine.UI;
using SimpleJSON;

public class MyClass
{
	public string username;
	public string score;
}

public class leaderBoard : MonoBehaviour {
	public static PubNub pubnub;
	public Text Line1;
	public Text Line2;
	public Text Line3;
	public Text Line4;
	public Text Line5;
	public Text Score1;
	public Text Score2;
	public Text Score3;
	public Text Score4;
	public Text Score5;
	public int ScoreInt1;
	public int ScoreInt2;
	public int ScoreInt3;
	public int ScoreInt4;
	public int ScoreInt5;

	public Button SubmitButton;
	public InputField FieldUsername;
	public InputField FieldScore;
	//public Object[] tiles = {}
	// Use this for initialization
	void Start () {
		Button btn = SubmitButton.GetComponent<Button>();
		btn.onClick.AddListener(TaskOnClick);

		// Use this for initialization
		PNConfiguration pnConfiguration = new PNConfiguration ();
		pnConfiguration.PublishKey = "pub-c-700d6386-17c7-4439-8d18-3472814914de";
		pnConfiguration.SubscribeKey = "sub-c-523850fa-5865-11e8-9796-063929a21258";

		pnConfiguration.LogVerbosity = PNLogVerbosity.BODY;
		pnConfiguration.UUID = Random.Range (0f, 999999f).ToString ();

		pubnub = new PubNub(pnConfiguration);
		Debug.Log (pnConfiguration.UUID);
		//scores = ("Score: {0}\nScore: {1}\nScore: {2}\nScore: {3}\nScore: {4}", ScoreInt1, ScoreInt2, ScoreInt3, ScoreInt4, ScoreInt5);
		pubnub.SusbcribeCallback += (sender, e) => { 
			SusbcribeEventEventArgs mea = e as SusbcribeEventEventArgs;
			if (mea.Status != null) {
			}
			if (mea.MessageResult != null) {
				//try {
				Dictionary<string, object> msg = mea.MessageResult.Payload as Dictionary<string, object>;

				Debug.Log("msg: " + msg["username"]);
				Debug.Log("msg: " + msg["score"]);

				string[] strArr = msg["username"] as string[];
				string[] strScores = msg["score"] as string[];


				int usernamevar = 1;
				foreach (string username in strArr)
				{
					string usernameobject = "Line" + usernamevar;
					GameObject.Find(usernameobject).GetComponent<Text>().text = usernamevar.ToString() + ". " + username.ToString();
					usernamevar++;
					Debug.Log(username);
				}

				int scorevar = 1;
				foreach (string score in strScores)
				{
					string scoreobject = "Score" + scorevar;
					GameObject.Find(scoreobject).GetComponent<Text>().text = "Score: " + score.ToString();
					scorevar++;
					Debug.Log(score);
				}

				//var myKey = msg.FirstOrDefault(x => x.Value == "one").Key;


			}
			if (mea.PresenceEventResult != null) {
				//lastClickText.text = mea.PresenceEventResult.UUID.ToString();
				Debug.Log("In Example, SusbcribeCallback in presence" + mea.PresenceEventResult.Channel + mea.PresenceEventResult.Occupancy + mea.PresenceEventResult.Event);
			}
		};
		pubnub.Subscribe ()
			.Channels (new List<string> () {
				"my_channel2"
			})
			.WithPresence()
			.Execute();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void TaskOnClick()
	{
		var usernametext = FieldUsername.text;// this would be set somewhere else in the code
		var scoretext = FieldScore.text;
		MyClass myObject = new MyClass();
		myObject.username = FieldUsername.text;
		myObject.score = FieldScore.text;
		string json = JsonUtility.ToJson(myObject);

		pubnub.Publish()
			.Channel("my_channel")
			//.Message("{\n\t\"username\": \"FieldUsername.text\",\n\t\"FieldScore.text\": \"810\"\n}")
			.Message(json)
			.Async((result, status) => {    
				if (!status.Error) {
					Debug.Log(string.Format("Publish Timetoken: {0}", result.Timetoken));
				} else {
					Debug.Log(status.Error);
					Debug.Log(status.ErrorData.Info);
				}
			});
		//Output this to console when the Button is clicked
		Debug.Log("You have clicked the button!");
	}

}
