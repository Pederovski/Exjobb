// Start HTTP server to host interactive website.
// Start WebSocket servers to send input from website to Unreal engine.

// 1. Open command prompt (cmd) & set directory
// 2. Run "node app.js" to start server in cmd
// (3. Open website in Chrome "localhost:3000")
// 4. Start game session in Unreal engine
// 5. When entering any of the puzzles, a message 
//    should be sent to console & to Unreal if all is correct

// ---------------------------------------------------------------------


// ---  HTML SERVER  ---------------------------------------------------
const http = require('http');
const fs = require('fs');
var path = require('path');

let connection = null;

/**/const httpserver = http.createServer(function(request, response) {

  console.log('request', request.url);

  var filePath = '.' + request.url;
  if(filePath == './') {
    filePath = './index.html';
  }

  var extname = String(path.extname(filePath)).toLowerCase();
    var mimeTypes = {
        '.html': 'text/html',
        '.js': 'text/javascript',
        '.css': 'text/css',
        '.json': 'application/json',
        '.png': 'image/png',
        '.jpg': 'image/jpg',
        '.gif': 'image/gif',
        '.svg': 'image/svg+xml',
        '.wav': 'audio/wav',
        '.mp4': 'video/mp4',
        '.woff': 'application/font-woff',
        '.ttf': 'application/font-ttf',
        '.eot': 'application/vnd.ms-fontobject',
        '.otf': 'application/font-otf',
        '.wasm': 'application/wasm'
    };

    var contentType = mimeTypes[extname] || 'application/octet-stream';

    fs.readFile(filePath, function(error, content) {
      if(error) {
        if(error.code == 'ENOENT') {
            fs.readFile('./404.html', function(error, content) {
              response.writeHead(404, { 'Content-Type':'text/html'});
            })
        } else {
          response.writeHead(500);
          response.end('Sorry! Error: ' + error.code + '..\n');
        }
      } else {
        response.writeHead(200, { 'Content-Type':contentType});
        response.end(content, 'utf-8');
      }
    });
    //console.log("We have received a request!");    
}).listen(3000, () => console.log("HTTP Server running on port 3000!"));


// ---  WEBSOCKET SERVER  -----------------------------------------------
const WebSocket = require('ws');
const webSocketServer = new WebSocket.Server({ port: 5000 });
// { port: 5000 }
// 192.168.233.28:5000

var wsConnection;

/*webSocketServer.on("request", request => {
  wsConnection = request.accept(null, request.origin);
});*/

webSocketServer.on('connection', (webSocketConnection) => {
  console.log('WebSocket server running on port 5000.');
  
  // First connection creates where you can send message from
  // e.g. first connect to webpage makes messages travel from website to Unreal, not vice versa (?)
  // lägg till identitet för att särskilja på Unreal & hemsida
  // lägg till variabel som räknar om message är från hemsidan, inte Unreal/spelet
  if(wsConnection == undefined) {
    wsConnection = webSocketConnection;
  }
  
  webSocketConnection.on('message', (message) => {
    console.log('Received message from WebSocket client: %s.', message);

    wsConnection.send(message);
  });

  //webSocketConnection.send(`Hello, this is server speaking!`);
});

/*server.listen(PORT, () => {
  console.log(`Listening on ${PORT}`);
});*/

const open = require('open');
open('http://localhost:3000/index.html', {app:'chrome'});

// ---------------------------------------------------------------------
// ----- CODE GRAVEYARD ------------------------------------------------

// CARLO'S CODE

/**
 * For instance a minimal WebSockets server based on nodejs and the ws package (https://www.npmjs.com/package/ws).
 * Install the package mentioned above first:
 *   npm install --save ws
 */

/*
const WebSocket = require('ws');
const webSocketServer = new WebSocket.Server({ port: 5500 });

webSocketServer.on('connection', (webSocketConnection) => {
  console.log('Received connection from UE4 WebSocket client.');

  webSocketConnection.on('message', (message) => {
  console.log('Received message from UE4 WebSocket client: %s.', message);
  });

  webSocketConnection.send('{"event": "welcome", "data": "welcome message data"}');
});*/

// ---------------------------------------------------------------------

// FROM YOUTUBE GUY

/*const websocket = new WebSocketServer({"httpServer": httpserver });

websocket.on("request", req => {
  connection = req.accept(null, req.origin);

  connection.on("open", () => console.log("Opened!"));
  connection.on("close", () => console.log("CLOSED!"));
  connection.on("message", message => {
  console.log(`Received message ${message}`);
  });
});

httpserver.listen(3000, () => console.log("Server is listening!"));*/

// ---------------------------------------------------------------------