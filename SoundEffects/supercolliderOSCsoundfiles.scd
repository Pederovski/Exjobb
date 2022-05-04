NetAddr.langPort;
NetAddr.localAddr;

// 0. Run this if using 8 channels
s.options.numOutputBusChannels_(1);

// 1. Start server (ctrl+b)

// 2. Run this code (ctrl+enter when inside the paranthesis)
(
var filePath = thisProcess.nowExecutingPath.dirname;

~door = Buffer.read(s, filePath +/+ "DoorCreak_2.wav");

~ambient = Buffer.read(s, filePath +/+ "Ambient_sound.wav");
)

// 3. And run this code
(
	SynthDef(\audiofile, {
		arg gate=0, amp=3, pan=0, prevpan=0, angle=0, buf, trig=1, loop=1;
		var sig, sig1, sig2, env;

		env = EnvGen.kr(
			Env.adsr(1.0,0.0,1.0,1.0),
			gate,
			doneAction:0);

		sig = PlayBuf.ar(1, buf, trigger: trig, loop:1);

		//STEREO
		//sig = Pan2.ar(sig, pan);

		sig = (sig + FreeVerb.ar(sig, 1-(amp),0.5-(amp/2),1.0))/2;
		sig = sig * env;

		Out.ar(0, sig);
	}).add;
)

// 4. And run this code
(

~ambientsound = Synth.new(\audiofile, [\buf, ~ambient.bufnum]);
~doorsound = Synth.new(\audiofile, [\buf, ~door.bufnum]);

OSCdef.new(\Door,
	{
		arg msg;

		// msg[1] = gate for door (0 or 1)
		// msg[2] = amp for door (1)

		("msg" + msg).postln;

		~doorsound.set(\trig, msg[1]);
		~doorsound.set(\amp, msg[2]);
		//~doorsound.set(\pan, msg[3]);
		//~doorsound.set(\pan, 0, \panSpeak, [0,2]);

	},'/door');


OSCdef.new(\Ambient,
	{
		arg msg;

		("msg" + msg).postln;

		~ambientsound.set(\gate, msg[1]);

	},'/ambient');
)

// 5. (Optional), Manual gate test
~ambientsound.set(\gate, 1);



( //Old bell code
	SynthDef(\bell, { |freq=465, strength=1, decay=3,gate=0,amp=0, pan=0|
		var sig, env;

		env = EnvGen.kr(
			Env.perc(0.01,0.5),
			1,
			doneAction:0);

		sig = SinOscFB.ar(freq,0.3);


		sig = sig * env * amp;
		Out.ar(pan, sig);
	}).add;

OSCdef.new(\test,
	{
		arg msg;

		("msg" + msg).postln;

		Pbind(\instrument, \bell, \freq, Pseq([392,493.9],1,0), \dur, Pseq([0.15,0.15],1,0), \amp, 1, \pan, 0).play;

	},'/to/supercollider');
)

/* Recieves all messages. Will receive messages from supercollider also, so only used for debugging.
(
~listener = {|msg, time, replyAddr, recvPort|
	if (msg[0] != "/status.reply", {
		// Log all received messages to the console.
		("Message received on port" + recvPort + "from " + replyAddr.ip + ":" + replyAddr.port + ":" + msg).postln;
	});
};

thisProcess.addOSCRecvFunc(~listener);
)*/