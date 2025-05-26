// Pines de control
const int AIN1 = 2;
const int AIN2 = 3;
const int PWMA = 5;  // PWM para velocidad
const int STBY = 4;

void setup() {
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(STBY, OUTPUT);

  // Activar el driver
  digitalWrite(STBY, HIGH);
}

void loop() {
  // Gira el motor hacia adelante a velocidad media
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 128);  // Velocidad (0 a 255)

  delay(3000);  // 3 segundos

  // Detener el motor
  analogWrite(PWMA, 0);
  delay(1000);

  // Gira el motor hacia atrás
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255);  // Velocidad máxima

  delay(3000);

  // Parar el motor
  analogWrite(PWMA, 0);
  delay(1000);
}
