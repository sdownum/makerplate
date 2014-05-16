
int output_led = 13;
char buf[256];

void setup()
{
   pinMode(output_led, OUTPUT);
   Serial.begin(9600);
   Serial.println("makerplate debug");
   Serial.println("****************");
   Serial.println("\nSetup Complete.");
   Serial.println("Begin loop.");
   Serial.println("Type a new display message:");

}

void loop() 
{  
  if (Serial.available() > 0) {
      Serial.readBytes(buf, 256);
      digitalWrite(output_led, HIGH);
      Serial.print("New display message is: ");
      Serial.println(buf);
      Serial.println("\n");
      delay(1000);
      digitalWrite(output_led, LOW);
      Serial.println("Type a new display message:");
  }
}
