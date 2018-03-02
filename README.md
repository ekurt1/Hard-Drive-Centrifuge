# Hard-Drive-Centrifuge
DIY Arduino-powered centrifuge from an old hard drive spindle and 3D printed rotor

Inspired by the work from Kemal Ficici (https://create.arduino.cc/projecthub/kemfic/developing-a-low-cost-microcentrifuge-using-e-waste-04b525), my lab was in need of a quick-portable centrifuge and modified the design for an AIO system, with secure mounting holes (https://www.thingiverse.com/thing:2812615), an enclosure, and emergency shutdown options.  The modified code also allows for speeds in RPM or G's, based on the 3D printed rotor dimensions.

The next step would be to have options for spin settings to be timed or pulsed, similar to our standard lab centrifuges.  As for the enclosure, work has to be done to have a lid and secure/weigh down the centrifuge, since it vibrates at speeds >1500 RPM.

The rotor is 3D printed on a Lulzbot Taz6 printer in PLA, with a 50% infill (anything less causes deformation and collapse at high speeds).  The board used is a STEMTera Breadboard with Arduino (since had that lying around), but the goal would be to condense all components into a single shield for an Arduino Uno.
