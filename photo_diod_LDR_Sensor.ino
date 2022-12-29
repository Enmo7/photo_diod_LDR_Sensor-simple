int readPin = A1; // define the Pin input in joystic on the arduino and give it analog pin.
int readValue; // define variable to save the value of readPin in her.

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT); // define the pin as an input pin.
  Serial.begin(9600); // to show the serial window.
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(readPin); // define it as a variable whose input has an analog value.
  Serial.println(readValue);
  
}
