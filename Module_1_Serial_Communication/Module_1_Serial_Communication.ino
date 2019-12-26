char value;

void setup()
{
  Serial.begin(9600);
  Serial.println("Module: Serial Communication");
}

void loop()
{
  if(Serial.available() > 0)                                //check available data
  {
    value = Serial.read();                                  //store available data

    Serial.println(value);                                  //print stored data
    delay(100);                                             //wait for 0.1 second
  }
}
