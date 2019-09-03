int pinoBotao = 7; 
int pinoLed = 2; 
 
void setup() {
 Serial.begin(9600);
pinMode(pinoBotao, INPUT_PULLUP); 
pinMode(pinoLed, OUTPUT); 
digitalWrite(pinoLed, LOW); 
}
void loop(){
  if(digitalRead(pinoBotao) == LOW){ 
     digitalWrite(pinoLed, HIGH); 
      Serial.println("Botão Pressionado");
  }else{ 
    digitalWrite(pinoLed, LOW); 
    Serial.println("Botão Não Pressionado");
  }  
}
