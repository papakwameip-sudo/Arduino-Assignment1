int startValue = 5;
int LedPin = 13;

void flashLED( int Times){
  while ( Times > 0){
    digitalWrite(LedPin, HIGH);
    delay(200); 
    digitalWrite(LedPin, LOW); 
    delay(200);
    Times = Times - 1;
  }
}

void setup() {

pinMode(LedPin, OUTPUT);
Serial.begin(9600);
Serial.println ("=====Smart Countdown Starting=====");

  while (startValue > 0){
    Serial.print(" Count:");
    Serial.println(startValue);
     flashLED(startValue) ;
    delay(1000);
    startValue = startValue - 1;
  }
  Serial.println ("===== Countdown Complete =====");

}



void loop() {
  // put your main code here, to run repeatedly:

}
