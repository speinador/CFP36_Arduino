// Práctica: encender y apagar 3 LED en secuancia (Semaforo)

int LED_ROJO = 8; //posicion del positivo en el Arduino para el LED ROJO
int LED_AMARILLO = 9; //posicion del positivo en el Arduino para el LED AMARILLO
int LED_VERDE = 10; //posicion del positivo en el Arduino para el LED VERDE

void setup () {
  pinMode(LED_ROJO, OUTPUT); //Definimos que vamos a conectar un LED
  pinMode(LED_AMARILLO, OUTPUT); //Definimos que vamos a conectar un LED
  pinMode(LED_VERDE, OUTPUT); //Definimos que vamos a conectar un LED
}

void loop() {
  digitalWrite(LED_ROJO, HIGH); //encendemos el LED ROJO
  delay(3000); //espera 3 segundos (3000 milisegundos)
  digitalWrite(LED_ROJO, LOW); //encendemos el LED ROJO

  digitalWrite(LED_AMARILLO, HIGH); //apagamos el LED AMARILLO
  delay(500); //espera 1/2 segundo (500 milisegundos)
  digitalWrite(LED_AMARILLO, LOW); //apagamos el LED AMARILLO

  digitalWrite(LED_VERDE, HIGH); //encendemos el LED VERDE
  delay(3000); //espera 3 segundos (3000 milisegundos)
  digitalWrite(LED_VERDE, LOW); //apagamos el LED VERDE

  digitalWrite(LED_AMARILLO, HIGH); //encendemos el LED AMARILLO
  delay(500); //espera 1/2 segundo (500 milisegundos)
  digitalWrite(LED_AMARILLO, LOW); //apagamos el LED AMARILLO
}
