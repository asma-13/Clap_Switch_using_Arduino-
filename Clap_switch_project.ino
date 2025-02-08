int micPin = A0;
int gndPin = A1;
int powerPin= A2;
int micValue1=0;
int micValue2 =0;
int LED= 13;
boolean lightOn = false;

void setup()
{
pinMode(micPin, INPUT);
pinMode(LED,OUTPUT);
pinMode(powerPin,OUTPUT);
pinMode(gndPin,OUTPUT);
digitalWrite(gndPin,LOW);
delay(500);
digitalWrite(powerPin,HIGH); 
Serial.begin(9600);
}

void loop()
{
micValue1= analogRead(micPin);
Serial.println(micValue1);
delay(1);
micValue2= analogRead(micPin);
Serial.println(micValue2);

if (micValue1 - micValue2 > 2||micValue2 - micValue1 >2)
{
lightOn = !lightOn;
delay(100);
digitalWrite(LED, lightOn);
}
}
