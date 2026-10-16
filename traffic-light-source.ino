// PIN 5 = RED
// PIN 6 = YELLOW
// PIN7 = GREEN

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);  // initializes pin 5 as output mode.
  pinMode(6, OUTPUT);  // initializes pin 6 as output mode.
  pinMode(7, OUTPUT);  // initializes pin 7 as output mode.
}

void loop() {
  // RED TO GREEN
  digitalWrite(5, HIGH);  // lights up the LED.
  delay(4000);            // waits 4 seconds.
  digitalWrite(5, LOW);   // unlights the LED.

  digitalWrite(6, HIGH);  // lights up the LED.
  delay(2000);            // waits 2 seconds.
  digitalWrite(6, LOW);   // unlights the LED.

  digitalWrite(7, HIGH);  // lights up the LED.
  delay(4000);            // waits 4 seconds.
  digitalWrite(7, LOW);   // unlights the LED.

  // GREEN TO RED
  digitalWrite(6, HIGH);  //lights up the LED.
  delay(2000);            // waits 2 seconds.
  digitalWrite(5, HIGH);  //lights up the LED.
  delay(1000);            // waits 1 second.
  digitalWrite(6, LOW);   // unlights the LED.
  delay(6000);            // waits 10 seconds.
  //End of sequence. Sequence restarts.
}
