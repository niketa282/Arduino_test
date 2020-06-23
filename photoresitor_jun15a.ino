#define INPUT_PIN A1 //changed to A1
#define LED_BUILT_IN 13
int threshold=15;
void setup() {
  pinMode(INPUT_PIN,OUTPUT);
  pinMode(LED_BUILT_IN,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(analogRead(INPUT_PIN));
  delay(100);
  if(analogRead(INPUT_PIN)< threshold){
    digitalWrite(LED_BUILT_IN,HIGH);
    }
    else{
      digitalWrite(LED_BUILT_IN,LOW);
      }
}
