void setup() {
  // put your setup code here, to run once:
  digitalWrite(LED_BUILTIN, HIGH);                   //voltage for LED is high
  delay(1000);                                      // there is a break for 1 second
  digitalWrite(LED_BUILTIN, LOW);                   //voltage for LED is low
  delay(1000);                                      

}
void Dash(){
   digitalWrite(LED_BUILTIN, HIGH);                 //voltage for LED is high
   delay(3000);                                   // there is a break for 3 second
    digitalWrite(LED_BUILTIN, LOW);                //voltage for LED is high
    delay(3000); }                                 // there is a break for 3 second
    void Dot(){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1000);
      digitalWrite(LED_BUILTIN, LOW);
      delay(1000);
    }
  


void loop() {
  // put your main code here, to run repeatedly:
  
  //NAMIT = -. .- -- .. -
  
  Dash();     //n
  Dot();
  delay(1000);
  Dot();        //a
  Dash();
  delay(1000);
  Dash();          //m
  Dash();
  delay(1000);
  Dot();          //i
  Dot();
  delay(1000);
  Dash();      //t
  delay(1000);
}
  
