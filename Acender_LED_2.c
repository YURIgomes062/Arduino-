// Acende o LED por dois 2 segundos e apaga por 2 segundos.

// C++ code
//
int pinoLed = 13;
void setup()
{
 pinMode(pinoLed,OUTPUT);
 
  
 
}

void loop()
{
 digitalWrite(pinoLed, HIGH);// comando para ligar.
 delay(2000); // delay para ficar ligado
  

 digitalWrite(pinoLed, LOW); // Comando para desligar.
 delay(2000); // O delay é escrito em milisegundos, aplica uma duração para a condição acima
}
