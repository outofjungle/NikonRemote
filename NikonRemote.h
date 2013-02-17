// NikonRemote.h - Arduino library to remotely trigger Nikon camera
// Thanks to Michele Bighignoli for timing information (http://www.bigmike.it/ircontrol/)
// and BENMCTEE for poor man's PWM logic (http://fritzing.org/projects/lightning-trigger-for-nikon-dslr-camera/)

#ifndef NIKONREMOTE_H
#define NIKONREMOTE_H

#include <Arduino.h>

class NikonRemote {
    private:
        unsigned int ir_pin;
        void pulse_on( unsigned long );
        void pulse_off( unsigned long );
        
    public:
        NikonRemote( unsigned int );
        void click();
};

#endif
