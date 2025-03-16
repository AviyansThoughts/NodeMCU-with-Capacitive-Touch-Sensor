// Welcome to Aviyan's Thoughts

int TouchPin = D2; // define the Touch pin on GPIO 4
int LED = D5; // define the LED pin on GPIO 14
int val = 0;

void setup() {
  pinMode (TouchPin, INPUT);
  pinMode (LED, OUTPUT);
  Serial.begin (9600);
}

void loop() {
 val=digitalRead(TouchPin);
 if (val == LOW){
 digitalWrite(LED, LOW);
 Serial.println ("Touch Not Detected");
 }
 else
 {
 digitalWrite(LED, HIGH);
 Serial.println ("Touch Detected");
 }
 delay(100);
}
