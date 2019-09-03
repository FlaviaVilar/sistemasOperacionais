int pinoBotaoup = 7; 
int pinoBotaodown = 8; 
int led1 = 2; 
int led2 = 3; 
int led3 = 4; 
int cont = 0;
 
void setup() {
 Serial.begin(9600);
pinMode(pinoBotaoup, INPUT); 
pinMode(pinoBotaodown, INPUT); 
pinMode(led1, OUTPUT); 
pinMode(led2, OUTPUT); 
pinMode(led3, OUTPUT); 
digitalWrite(led1, LOW); 
digitalWrite(led2, LOW); 
digitalWrite(led3, LOW); 
}

void loop(){

  int up = digitalRead(pinoBotaoup);

  int down = digitalRead(pinoBotaodown);
  
  if(up == LOW){ 
      Serial.println("up Pressionado");
      cont = cont+1;
      Serial.println(cont);
  }else{ 
    delay(1000);
  }  

   if(down == HIGH){ 
      Serial.println("down Pressionado");
      cont = cont-1;
      Serial.println(cont);
  }else{ 
    delay(1000);
  }  


  if(cont==1)
  {
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }else if (cont == 2){
    digitalWrite(led2, HIGH); 
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
  } else if (cont ==3){
    digitalWrite(led3, HIGH); 
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  else{
    digitalWrite(led3, LOW); 
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  

  delay(1000);

  
}
