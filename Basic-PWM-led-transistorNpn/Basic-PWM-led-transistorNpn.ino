/********************************************************/
/* 
 * EJEMPLO DE PWM PARA CONTROLAR LEDS
 * Y EVENTUALMENTE OTRAS CARGAS MEDIANTE
 * UN TRANSISTOR NPN
 */
 /*******************************************************/
 
const int LED_PIN = 3; //Elegimos un pin con PWM

int delayTime = 1000; //tiempo de delay en milisegundos
int loopTime = 10;

void setup() {
  //Seteamos pin
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  efectoSubida();
  efectoBajada();
}

///////////////////////////////////////////////////////////
void efectoSubida() {
  for (int counter = 0; counter < 255; counter++) {
    analogWrite(LED_PIN, counter);
    delay(loopTime);
  }
  delay(delayTime);
}

void efectoBajada() {
  for (int counter = 255; counter >= 0; counter--) {
    analogWrite(LED_PIN, counter);
    delay(loopTime);
  }
  delay(delayTime);
}
