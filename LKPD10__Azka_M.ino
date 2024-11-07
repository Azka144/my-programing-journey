// AZKA MUSTOFAVI HAKIM
// XI TAV1

const int buttonpin=26;
void setup() {
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);}
void loop() {
  int buttonState = digitalRead(buttonpin);
  Serial.print("Tombol ditekan");
  if (buttonState == HIGH){
    Serial.println("YA");
  }else{
   Serial.println("TIDAK");}
  delay(100);}
  
