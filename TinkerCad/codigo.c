#define pinVermelho 9 
#define pinVerde 10 
#define pinAzul 12

int pins[] = {pinVermelho, pinVerde, pinAzul};
int numPins = sizeof(pins) / sizeof(pins[0]);

void setup() {
   for (int p = 0; p < numPins; p++) {
    pinMode(pins[p], OUTPUT);
  }

  
}

void loop() {
  numPins
  for(int p = 0; p < numPins; p++){
    
      
      for(int i = 0; i <= 255; i++){
        analogWrite(pins[p], i);
        delay(15);
      }

      
      for(int i = 255; i >= 0; i--){
        analogWrite(pins[p], i);
        delay(15);
      }
  }
  
  for(int p = 0; p < numPins; p++){
    for(int i = 0; i < 2; i++){
      delay(500);
      digitalWrite(pins[p], HIGH);
      
      delay(500);
      digitalWrite(pins[p], LOW);
      
    }

    delay(500); 
  }
}
  