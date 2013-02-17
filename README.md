Arduino Nikon IR Remote Library
===============================

Arduino library to remotely trigger Nikon camera.
 
 - Thanks to Michele Bighignoli for timing information (http://www.bigmike.it/ircontrol/)
 - BENMCTEE for poor man's PWM logic (http://fritzing.org/projects/lightning-trigger-for-nikon-dslr-camera/)

Installation
------------

Clone this repository into Arduino libraries folder and re-start the Arduino IDE.

    $ cd $ARDUINO_LIBS
    $ git clone git://github.com/outofjungle/NikonRemote.git

Use
---
Library comes with a simple example `click` that gets added to the Arduino Example menu upon installation.

To run the code, wire an IR LED to the arduino as shown in the wiring diagram and upload the sketch to the Arduino. To activate the remote, press and release the Arduino reset button.

### Wiring diagram


![Screenshot 1](https://github.com/outofjungle/NikonRemote/raw/master/example_wiring.png)
