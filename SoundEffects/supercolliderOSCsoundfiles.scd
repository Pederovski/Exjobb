NetAddr.langPort;
NetAddr.localAddr;

// 0. Run this if using 8 channels
s.options.numOutputBusChannels_(8);

// 1. Start server (ctrl+b)

// 2. Run this code (ctrl+enter when inside the paranthesis)
(
var filePath = thisProcess.nowExecutingPath.dirname;

~door = Buffer.read(s, filePath +/+ "DoorCreak_2.wav");
~clock = Buffer.read(s, filePath +/+ "ClockTicking_1.wav");
~electricity2 = Buffer.read(s, filePath +/+ "ElectricSound_Effect_2.wav");
~electricity3 = Buffer.read(s, filePath +/+ "ElectricSound_Effect_3.wav");
~flourescent = Buffer.read(s, filePath +/+ "Flourescent_SoundEffect.wav");
~lightflickering = Buffer.read(s, filePath +/+ "Light Flickering Sound Effect.wav");
~ventilation1 = Buffer.read(s, filePath +/+ "Ventilation_1.wav");
~ventilation2 = Buffer.read(s, filePath +/+ "Ventilation_2.wav");
~ambient = Buffer.read(s, filePath +/+ "Ambient_sound.wav");
)

// 3. And run this code
(
	SynthDef(\allSpeakers, {
		arg gate=0, amp=1, pan=0, panSpeak=0, buf, trig=1, loop=1;
		var sig, sig1, sig2, env;

		env = EnvGen.kr(
			Env.adsr(1.0,0.0,1.0,1.0),
			gate,
			doneAction:0);

		sig = PlayBuf.ar(1, buf, trigger: trig, loop:1);

		//STEREO
		//sig = Pan2.ar(sig, pan);

		sig = amp * sig * env;

		Out.ar([0,1,2,3,4,5,6,7], sig);
	}).add;

	SynthDef(\trigsound, {
		arg gate=1, amp=1, pan=0, panSpeak=0, buf, trig=0, loop=0;
		var sig, sig1, sig2, env;

		env = EnvGen.kr(
			Env.adsr(1.0,0.0,1.0,1.0),
			gate,
			doneAction:2);

		sig = PlayBuf.ar(1, buf, trigger: trig, loop:loop);

		//STEREO
		//sig = Pan2.ar(sig, pan);

	    // 8 channels
	    sig = PanAz.ar(8,sig,pan);

		sig = amp * sig * env;

		Out.ar(0, sig);
	}).add;
)

// 4. And run this code
(


~clocksound = Synth.new(\allSpeakers, [\buf, ~clock.bufnum]);

~ambientsound = Synth.new(\allSpeakers, [\buf, ~ambient.bufnum, \amp,  3,]);




/*~electricity2sound = Synth.new(\trigsound, [\buf, ~electricity2.bufnum]);
~electricity3sound = Synth.new(\trigsound, [\buf, ~electricity3.bufnum]);
~flourescentsound = Synth.new(\trigsound, [\buf, ~flourescent.bufnum]);
~lightflickeringsound = Synth.new(\trigsound, [\buf, ~lightflickering.bufnum]);
~ventilation1sound = Synth.new(\trigsound, [\buf, ~ventilation1.bufnum]);
~ventilation2sound = Synth.new(\trigsound, [\buf, ~ventilation2.bufnum]);*/

OSCdef.new(\Door,
	{
		arg msg;

		// msg[1] = gate for door (0 or 1)
		// msg[2] = amp for door (1)
		// msg[3] = pan (0-2), an position (kr or ar). Channels are evenly spaced over a cyclic period of 2.0 in pos with 0.0 equal to channel zero and 2.0/numChans equal to channel 1, 4.0/numChans equal to channel 2, etc.


		("msg" + msg).postln;

		~doorsound = Synth.new(\trigsound, [\buf, ~door.bufnum, \pan, msg[3]]);

		//~doorsound.set(\trig, msg[1]);
		//~doorsound.set(\amp, msg[2]);
		//~doorsound.set(\pan, msg[3]);
		//~doorsound.set(\pan, 0, \panSpeak, [0,2]);

	},'/door');

OSCdef.new(\Elctric,
	{
		arg msg;

		// msg[1] = gate for door (0 or 1)
		// msg[2] = amp for door (1)
		// msg[3] = pan (0-2), an position (kr or ar). Channels are evenly spaced over a cyclic period of 2.0 in pos with 0.0 equal to channel zero and 2.0/numChans equal to channel 1, 4.0/numChans equal to channel 2, etc.


		("msg" + msg).postln;

		~electricity2sound = Synth.new(\trigsound, [\buf, ~electricity2.bufnum]);

		//~doorsound.set(\trig, msg[1]);
		//~doorsound.set(\amp, msg[2]);
		//~doorsound.set(\pan, msg[3]);
		//~doorsound.set(\pan, 0, \panSpeak, [0,2]);

	},'/elctric');


OSCdef.new(\Ambient,
	{
		arg msg;

		("msg" + msg).postln;

		~ambientsound.set(\gate, msg[1]);

	},'/ambient');
)

// 5. (Optional), Manual gate test
~ambientsound.set(\gate, 1);
~doorsound.set(\gate, 1);
~doorsound.set(\trig, 1);
~doorsound.set(\trig, -1);




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