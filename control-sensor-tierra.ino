/************
Interruptor de alimentación a 12 V para un sensor de humedad de suelo
controlando un MOSFET y respondiendo a las llamadas de que hace otro
controlador a través de RS485. El MCU estara en dormido esperando una
interrupción en uno de los pines que se conecta al cable que va del sensor
al MCU del datalogger
*/
#include

const int switchPin = D0;
const int busPin = D1;
bool busState = false;

void setup() {
  pinMode(switchPin, OUTPUT);
  pinMode(busPin, INPUT);
}

void loop() {
  busState = digitalRead(busPin);
  if (busState) {
    digitalWrite(switchPin, HIGH);
  }
  digitalWrite(switchPin, LOW);
}
