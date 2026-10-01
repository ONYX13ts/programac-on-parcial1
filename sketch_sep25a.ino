//funciones

int sensorOxigeno = 0;
int valorOxigeno = 600;
int OxigenoAlto = 4;    // led rojo
int OxigenoOptimo = 5;  // led verde
int OxigenoBajo = 6;    // led azul

void setup() {
  Serial.begin(9600);
  // salidas
  pinMode(OxigenoAlto, OUTPUT);
  pinMode(OxigenoOptimo, OUTPUT);
  pinMode(OxigenoBajo, OUTPUT);
}

void loop() {
  sensorOxigeno = analogRead(A0);

  if ((sensorOxigeno < valorOxigeno + 200) &&
      (sensorOxigeno > valorOxigeno - 200)) {
    digitalWrite(OxigenoOptimo, HIGH);
    digitalWrite(OxigenoAlto, LOW);
    digitalWrite(OxigenoBajo, LOW);
  } else if (sensorOxigeno > valorOxigeno + 200) {
    digitalWrite(OxigenoOptimo, LOW);
    digitalWrite(OxigenoAlto, HIGH);
    digitalWrite(OxigenoBajo, LOW);
  } else if (sensorOxigeno < valorOxigeno - 200) {
    digitalWrite(OxigenoOptimo, LOW);
    digitalWrite(OxigenoAlto, LOW);
    digitalWrite(OxigenoBajo, HIGH);
  }

  delay(50);
}