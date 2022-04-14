NetAddr.localAddr;




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

// 1. enable 8 speakers
s.options.numOutputBusChannels_(8);


// 2. Start server (ctrl+b)

// 2. Run this code (ctrl+enter when inside the paranthesis
(
	SynthDef(\bell, { |freq=465, strength=1, decay=3,gate=0,amp=0, pan=0|
		var sig, env;

		env = EnvGen.kr(
			Env.perc(0.01,0.5),
			1,
			doneAction:0);

		sig = SinOscFB.ar(freq,0.7);

//sig = PanAz.ar(7, sig, MouseX.kr(-1,1));
		sig = sig * env * amp;
		Out.ar(pan, sig);
	}).add;

OSCdef.new(\CodeLow,
	{
		arg msg;

		("msg" + msg).postln;

		Pbind(\instrument, \bell, \freq, Pseq([200],1,0), \dur, Pseq([0.15],1,0), \amp, 0.5, \pan, msg-1).play;

	},'/CodeLow');

OSCdef.new(\CodeHigh,
	{
		arg msg;

		("msg" + msg).postln;

		Pbind(\instrument, \bell, \freq, Pseq([400],1,0), \dur, Pseq([0.15],1,0), \amp, 0.5, \pan, msg-1).play;

	},'/CodeHigh');
)



//Debugging without sound
(
OSCdef.new(\test,
	{
		arg msg;

		("msg" + msg).postln;

		//Pbind(\instrument, \bell, \freq, Pseq([392,493.9],1,0), \dur, Pseq([0.15,0.15],1,0), \amp, 1, \pan, 0).play;

},'/to/supercollider');

)