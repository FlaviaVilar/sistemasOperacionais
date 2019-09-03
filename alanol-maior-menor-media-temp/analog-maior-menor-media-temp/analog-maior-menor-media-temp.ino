String incomingByte; // for incoming serial data
float maior=0;
float menor=0;
const int pot = A0;
float acum = 0;
float temperatura =0;

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
 
 if (Serial.available() > 0) {
   incomingByte = Serial.readString();

 
    if(incomingByte=="a\n")
    {
      Serial.println("entrou");
      for(int i=0; i<3 ;i++)
      {
        Serial.println("entrou for");
        int ad = analogRead(pot);
        Serial.print("valor lido = " );
        Serial.println(ad);


        temperatura = (float((ad)) * 5/(1023))/0.01;    // exemplo ACS712 185mV/A => 0.185
        Serial.print("temperatura: " );
        Serial.println(temperatura);
        delay(2000);
        
       if(i==0)
        {
          menor = temperatura;
          maior = temperatura;
        }
        else if( temperatura >= maior)
        {
          maior = temperatura;
          
        }
        else if(maior > menor)
        {
         menor = temperatura; 
        }
         acum = acum + temperatura;
      }
    }
    else{
       Serial.println("n entrou");
       delay(1000);
    }

     Serial.println("Menor: ");
    Serial.println(menor);
    delay(1000);
    Serial.println("Maior: ");
    Serial.println(maior);
    delay(1000);
    Serial.println("Média: ");
    Serial.println(acum/10);
    delay(1000);
 }
  
   
    
      }
