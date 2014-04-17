
int output_led = 13;

void setup()
{
   pinMode(output_led, OUTPUT);
   Serial.begin(9600);
   Serial.println("makerplate debug");
   Serial.println("****************");
   Serial.println("\nSetup Complete.");
   Serial.println("Begin loop.");
}

void loop() 
{
  Serial.println("LED ON");
  digitalWrite(output_led, HIGH);
  Serial.println("Waiting...");
  delay(1000);
  Serial.println("LED OFF");
  digitalWrite(output_led, LOW);
  Serial.println("Waiting...");  
}
