const int pot = A0;     // lm35 = 10mV/C    =>  20 = 200mV     200/5 = 40
void setup() {
   Serial.begin(9600);
}

void loop() {

 int ad = analogRead(pot);
 Serial.print("valor lido = " );
 Serial.println(ad);

 
 float temperatura = (float((ad)) * 5/(1023))/0.01;    // ACS712 185mV/A => 0.185
 Serial.print("temperatura: " );
 Serial.println(temperatura);
 delay(2000);
 
}
