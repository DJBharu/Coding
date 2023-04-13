int redPin=8;
int greenPin=9;
int bluePin=10;
String myColor;
String msg="What Colour Do You Want?";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0) {
  
}
myColor=Serial.readString();

if (myColor=="red") {
digitalWrite(redPin,255);
digitalWrite(greenPin,0);
digitalWrite(bluePin,0);
}
if (myColor=="green") {
digitalWrite(redPin,0);
digitalWrite(greenPin,255);
digitalWrite(bluePin,0);
}
if (myColor=="blue") {
digitalWrite(redPin,0);
digitalWrite(greenPin,0);
digitalWrite(bluePin,255);
}
if (myColor=="off") {
digitalWrite(redPin,0);
digitalWrite(greenPin,0);
digitalWrite(bluePin,0);
}

if (myColor=="aqua") {
digitalWrite(redPin,0);
analogWrite(greenPin,255);
analogWrite(bluePin,255);
}
}