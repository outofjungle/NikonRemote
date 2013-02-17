#include <NikonRemote.h>

int IR_PIN = 12; 

NikonRemote remote( IR_PIN );

void setup() {
    remote.click();
}
void loop() {}
