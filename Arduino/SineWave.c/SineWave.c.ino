// Simple DAC sine wave test on Teensy 3.1

float phase = 0.0;
float twopi = 3.14159 * 2;
elapsedMicros usec = 0;

void setup() {
  analogWriteResolution(12);
}

void loop() 
{
  while(true){
    analogWrite(A21, 255);
    delay(100);
    analogWrite(A21, 0);
  }
}
