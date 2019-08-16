// Práctica encender y apagar un LED a través de botón pulsador

int LED=13; //posicion del positivo del LED en el Arduino
int BOTON=7; //posicion del positivo del BOTON en el Arduino
int valor; //verifica si esta encendido o apagado

void setup(){
  pinMode(LED,OUTPUT); //Definimos que vamos a conectar un LED
  pinMode(BOTON,INPUT); //Definimos que vamos a conectar un BOTON
}

void loop(){
  valor=digitalRead(BOTON); //verifica si esta encendido o apagado... 0 apagado y 1 encendido
  if  (valor==HIGH){ // SI el valor es 1 se cumple esta accion
    digitalWrite(LED,HIGH); //encendemos el LED
  }
  else { // SI NO se cumple esta accion
     digitalWrite(LED,LOW); //apagamos el LED
  }
}
