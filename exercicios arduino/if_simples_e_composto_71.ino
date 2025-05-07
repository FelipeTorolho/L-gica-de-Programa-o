long numero, numero2;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite um numero inteiro");
  while (!Serial.available());
  numero = Serial.parseInt();
  
  Serial.println("digite outro numero inteiro");
  while (!Serial.available());
  numero2 = Serial.parseInt();

  
  if (numero >= numero2) {
    Serial.println("o numero maior e:" + String(numero));
  }else{
    Serial.println("o numero maior e:" + String(numero));
  }

  delay(3000);
}