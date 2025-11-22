// C++ code
//
int pinoLed = 13;
void setup()
{
 pinMode(pinoLed,OUTPUT);
 digitalWrite(pinoLed, HIGH);
  
 delay(2000); // O delay é escrito em milisegundos, aplica uma duração para a condição acima
 digitalWrite(pinoLed, LOW); // Comando para desligar.
}

void loop()
{
 
}