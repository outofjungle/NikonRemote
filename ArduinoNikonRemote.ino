#include "NikonRemote.h"

int IR_PIN = 12; 

NikonRemote remote( IR_PIN );

void setup() {}
void loop() {
    remote.click();
    delay( 60 );
}
