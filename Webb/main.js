// START SERVER

/**
 * For instance a minimal WebSockets server based on nodejs and the ws package (https://www.npmjs.com/package/ws).
 * Install the package mentioned above first:
 *   npm install --save ws
 */

 const open = require('open');
 
 // specify the app to open in 
 open('index.html');

//import WebSocket from 'ws';

 const WebSocket = require('ws');
 const webSocketServer = new WebSocket.Server({ port: 5500 });

 webSocketServer.on('connection', (webSocketConnection) => {
   console.log('Received connection from UE4 WebSocket client.');

   webSocketConnection.on('message', (message) => {
     console.log('Received message from UE4 WebSocket client: %s.', message);
   });
 
   webSocketConnection.send('{"event": "welcome", "data": "welcome message data"}');
 });


console.log("Sup, main.js running..");

function _puzzle1() {
    var puzzle1 = document.getElementById('puzzle1input').value;
    //con.send('Hej detta e ett test');
    console.log(puzzle1);
}

function _puzzle2() {
    var puzzle2 = document.getElementById('puzzle2input').value;
    console.log(puzzle2);
}

function _puzzle3() {
    var puzzle3 = document.getElementById('puzzle3input').value;
    console.log(puzzle3);
}


// CODE GRAVEYARD:

/*document.getElementById('puzzle1button').onclick = function _puzzle1() {
    var puzzle1 = document.getElementById('puzzle1input').value;
    console.log(puzzle1);
}

document.getElementById('puzzle2button').onclick = function _puzzle2() {
    var puzzle2 = document.getElementById('puzzle2input').value;
    console.log(puzzle2);
}

document.getElementById('puzzle3button').onclick = function _puzzle3() {
    var puzzle3 = document.getElementById('puzzle3input').value;
    console.log(puzzle3);
}*/

// --------------------------------------------------

/*var puzzle1 = document.getElementById('puzzle1input');
var puzzle2 = document.getElementById('puzzle2input');
var puzzle3 = document.getElementById('puzzle3input');

puzzle1.addEventListener("click", function() {      
    alert("Hi");
});

puzzle2.addEventListener("click", function() {
    alert("Hi");
});

puzzle3.addEventListener("click", function() {
    alert("Hi");
});
*/