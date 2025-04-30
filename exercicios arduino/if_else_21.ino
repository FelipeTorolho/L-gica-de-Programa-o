// C++ code
//variaveis
 String cor = "";
 String verde = "";
 String vermelho = "";
 void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a cor do semaforo?");
  while( ! Serial.available () );
  verde = Serial.readString();
  
  
  if(cor ==verde , cor ==vermelho ){
   Serial.println("Siga");
  } else {
   Serial.println("Pare");
  }
  
  delay(3000);
}