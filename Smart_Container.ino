int sensorPin = A0;    // select the input pin for the soil moisture sensor
int sensorValue = 0;   // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);  // initialize serial communication at 9600 bits per second
}

void loop() {
  sensorValue = analogRead(sensorPin);  // read the value from the sensor
  Serial.println(sensorValue);          // print the value to the serial monitor
  delay(1000);                          // wait for a second between readings
}
