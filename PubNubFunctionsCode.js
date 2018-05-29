export default (request) => {
    const db = require("kvstore");
    const pubnub = require("pubnub");
    var json = JSON.parse(request.message);
    console.log(json);
    let { username, score } = json;
    //let { username, score } = request.message;
    var scorearray1 = [];
    var scorearray2 = [];
    var usernamearray1 = [];
    var usernamearray2 = [];

   // db.removeItem("data"); //reset the block
    db.get("data").then((value) => {
        if(value){
            console.log("value", value);
            let i = 0;
            value.score.some(item => {
                console.log("hello", item, score);
                if(parseInt(item) < parseInt(score)){ //Parse into int since variables are currently strings
                    //Score
                    scorearray2 = value.score.slice(0, i);
                    scorearray1 = value.score.slice(i, value.score.length);
                    console.log("values", scorearray2, scorearray1);
                    scorearray2.push(score);
                    var newList = scorearray2.concat(scorearray1);
                    newList.splice(-1,1);
                    
                    //Username
                    usernamearray2 = value.username.slice(0, i);
                    usernamearray1 = value.username.slice(i, value.score.length);
                    console.log("values", usernamearray2, usernamearray1);
                    usernamearray2.push(username);
                    var newList2 = usernamearray2.concat(usernamearray1);
                    newList2.splice(-1,1);
                    
                    value.score = newList;
                    value.username = newList2;

                    db.set("data", value);
                    
                    return true; //break out of the loop using Array.prototype.some by returning true
               }
                i++;
            });
            pubnub.publish({
                "channel": "my_channel2",
                "message": value
            }).then((publishResponse) => {
                console.log("publish response", publishResponse);
            });
        } else {
            db.set("data", {
                "username":["unset","unset","unset","unset","unset"], 
                "score":["0","0","0","0","0"]});
        }
    });
    return request.ok();
};