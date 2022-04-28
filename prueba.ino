//Librairieshttps://github.com/bitwiseAr/Curso-Arduino-desde-cero
#include <AFMotor.h>
//Constants
const int motorspeed=200;
//Parameters
AF_DCMotor motorG(1);

void setup() {
  //Código de inicialización: se ejecuta una vez
  Serial.begin(9600);
  Serial.println("Test motor");

  motorG.setSpeed(motorspeed);
  motorG.run(RELEASE);

}

void loop() {
  // Código principal: se ejecuta repetitivamente
  Serial.println("-------------------------------------");
  Serial.println("Antes ");
  motorG.run(FORWARD);
  delay(500);
  Serial.println("Atrás ");
  motorG.run(BACKWARD);
  delay(500);
  Serial.println("Detenerse ");
  motorG.run(RELEASE);
  delay(1000);
}
