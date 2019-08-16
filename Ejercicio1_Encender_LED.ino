// Práctica encender y apagar un LED

int LED = 8; //posicion del positivo en el Arduino

void setup () {
  pinMode(LED, OUTPUT); //Definimos que vamos a conectar
}

void loop() {
  digitalWrite(LED, HIGH); //encendemos el LED
  delay(500); //espera 1/2 segundo (500 milisegundos)
  digitalWrite(LED, LOW); //apagamos el LED
  delay(500); //espera 1/2 segundo (500 milisegundos)
}
