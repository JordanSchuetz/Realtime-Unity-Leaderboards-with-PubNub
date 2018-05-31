[Try Demo](https://jordanschuetz.github.io/Realtime-Unity-Leaderboards-with-PubNub/webgldemo/index.html)
<h2>Setting Up Unity</h2>
To start out, checkout my <a href="https://github.com/JordanSchuetz/Realtime-Unity-Leaderboards-with-PubNub">GitHub</a> and clone/download the repo.  If you don't already have Unity installed, install it <a href="https://unity3d.com/get-unity/download">here</a>.  The repo contains an Assets folder which contains all of the Project Files.  Open up Unity, and go to <strong>File -&gt; Open Project</strong> and select the folder. It will take some time to load the project in Unity.  When it completes, open up the Assets folder in your <strong>Project</strong> tab, and double-click on the <strong>LeaderBoard</strong> Unity Scene.

When you click on the <strong>LeaderBoard</strong> scene, you should see this:

<a href="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-1.44.19-PM.png"><img class="alignnone wp-image-34139 size-large" src="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-1.44.19-PM-1024x623.png" alt="Realtime Leaderboards in Unity" width="1024" height="623" /></a>

To try out the demo, click the Play button at the top.

If you get the following error, follow the steps below:
<blockquote>Scene ‘LeaderBoard’ couldn’t be loaded because it has not been added to the build settings or the AssetBundle has not been loaded.</blockquote>
To fix this, go to <strong>File -&gt; Build Settings</strong>. Click the <strong>Add Open Scenes</strong> button. Then go back to your Project tab, and double-click on the <strong>LeaderBoard</strong>, go back to your Build Settings, and click <strong>Add Open Scenes</strong> once again. Then in your Project Tab, double-click on the LeaderBoard scene again and run the project.

&nbsp;
<h2>Running the Project</h2>
Now that your project is all set up, click the <strong>Run</strong> button.  When you run the project, a PubNub <a href="https://github.com/JordanSchuetz/Realtime-Unity-Leaderboards-with-PubNub/blob/master/Assets/leaderBoard.cs#L52">Fire message</a> is sent to the PubNub Function.As you can see in the screenshot below, when there are no scores stored in the <a href="https://www.pubnub.com/docs/blocks/tutorials/kv-store">KV Store</a>, it will fill out every unfilled entry with "unset".   Below I'm going to add some more entries to the KV store by typing in a username and score.

<a href="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-3.02.45-PM.png"><img class="alignnone wp-image-34153 size-large" src="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-3.02.45-PM-1024x626.png" alt="Realtime Leaderboards in Unity" width="1024" height="626" /></a>

Lets add more entries. Lara, James, and Bob just got added to the highscore list below.

<a href="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-3.03.19-PM.png"><img class="alignnone wp-image-34154 size-large" src="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-3.03.19-PM-1024x623.png" alt="Realtime Leaderboards and Scoreboard in Unity" width="1024" height="623" /></a>

Now let's add Stephen to the list. As you can see, since his score is higher than Bob's but lower than James, he is placed in the 5th spot.  All players that are connected to the game will see this score update in realtime.  This logic is all done in the PubNub Function using the KV Store and array sorting.  Click the try our demo button below to checkout how it works.

<a href="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-3.04.22-PM.png"><img class="alignnone wp-image-34155 size-large" src="https://www.pubnub.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-29-at-3.04.22-PM-1024x622.png" alt="Scoreboard and Leaderboard in Unity 3D" width="1024" height="622" /></a>
<p style="text-align: center;"><a href="https://jordanschuetz.github.io/Realtime-Unity-Leaderboards-with-PubNub/webgldemo/index.html"><img class="alignnone size-medium wp-image-33902" src="https://www.pubnub.com/wp-content/uploads/2018/05/button-red2-300x74.png" alt="" width="300" height="74" /></a></p>
<p style="text-align: center;"><em>Open up two windows to see the high scores updating in real time</em></p>
