int pin3state = LOW;
int pin5state = LOW;
int pin6state = LOW;
int pin9state = LOW;
int pin10state = LOW;

unsigned long previousMicros3 = 0;
unsigned long previousMicros5 = 0;
unsigned long previousMicros6 = 0;
unsigned long previousMicros9 = 0;
unsigned long previousMicros10 = 0;

unsigned long currentMicros = 0;

void setup(){
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop(){
  currentMicros = micros();

  if (currentMicros - previousMicros3 >= 10000){
    previousMicros3 = currentMicros;
    if (pin3state == LOW){
      pin3state = HIGH;
    }
    else{
      pin3state = LOW;
    }
    digitalWrite(3, pin3state);
  }

  if (currentMicros - previousMicros5 >= 1000){
    previousMicros5 = currentMicros;
    if (pin5state == LOW){
      pin5state = HIGH;
    }
    else{
      pin5state = LOW;
    }
    digitalWrite(5, pin5state);
  }

  if (currentMicros - previousMicros6 >= 500){
    previousMicros6 = currentMicros;
    if (pin6state == LOW){
      pin6state = HIGH;
    }
    else{
      pin6state = LOW;
    }
    digitalWrite(6, pin6state);
  }

  if (currentMicros - previousMicros9 >= 100){
    previousMicros9 = currentMicros;
    if (pin9state == LOW){
      pin9state = HIGH;
    }
    else{
      pin9state = LOW;
    }
    digitalWrite(9, pin9state);
  }

  if (currentMicros - previousMicros10 >= 50){
    previousMicros10 = currentMicros;
    if (pin10state == LOW){
      pin10state = HIGH;
    }
    else{
      pin10state = LOW;
    }
    digitalWrite(10, pin10state);
  }
}