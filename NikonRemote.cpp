#include "NikonRemote.h"

NikonRemote::NikonRemote( unsigned int ir_pin ) {
    this->ir_pin = ir_pin;
    pinMode( this->ir_pin, OUTPUT);
}

void 
NikonRemote::pulse_on( unsigned long duration ) {
    unsigned long stop = micros() + duration;
    while( micros() < stop ) {
        digitalWrite( this->ir_pin, HIGH );
        delayMicroseconds( 13 );
        digitalWrite( this->ir_pin, LOW );
        delayMicroseconds( 13 );
    }
}

void 
NikonRemote::pulse_off( unsigned long duration ) {
    unsigned long stop = micros() + duration;
    while( micros() < stop );
}

void 
NikonRemote::click() {
    for (int i=0; i < 2; i++) {
        pulse_on(2000);
        pulse_off(27850);
        pulse_on(390);
        pulse_off(1580);
        pulse_on(410);
        pulse_off(3580);
        pulse_on(400);
        pulse_off(63200);
    }
}
