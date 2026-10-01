int sensorOxigeno = 0;
int valorOxigeno = 600;
int OxigenoAlto = 6;    // led rojo
int OxigenoOptimo = 5;  // led verde
int OxigenoBajo = 4;    // led azul
bool estadoboton;
int velocidad=100;
int boton1=1;
bool estadoactual = HIGH;


void setup() {
  Serial.begin(9600);
  // salidas
  pinMode(OxigenoAlto, OUTPUT);
  pinMode(OxigenoOptimo, OUTPUT);
  pinMode(OxigenoBajo, OUTPUT);
  pinMode(boton1, INPUT);
}

void loop() {
  velocidad = analogRead(A0);
  int estadoboton = digitalRead(boton1);

  velocidad = map(velocidad, 0, 1023, 0, 255);

  if (estadoactual == HIGH) {
    estaciondeoxigeno1(velocidad);
  } else{
    estaciondeoxigeno2(velocidad);
  }
  if (estadoboton==LOW){
    if (estadoactual==HIGH){
      estadoactual=LOW;
    }
    if (estadoactual == LOW){
      estadoactual=HIGH;
    }
  }
  Serial.println(estadoboton);
  delay(50);
}

void estaciondeoxigeno1(int v){
  v=v*10;
  digitalWrite(OxigenoOptimo, HIGH);
  digitalWrite(OxigenoAlto, LOW);
  digitalWrite(OxigenoBajo, LOW);
  delay(v);
  digitalWrite(OxigenoOptimo, LOW);
  digitalWrite(OxigenoAlto, HIGH);
  digitalWrite(OxigenoBajo, LOW);
  delay(v);
  digitalWrite(OxigenoOptimo, LOW);
  digitalWrite(OxigenoAlto, LOW);
  digitalWrite(OxigenoBajo, HIGH);
  delay(v);

}

void estaciondeoxigeno2(int v){
  v=v*10;
  digitalWrite(OxigenoOptimo, LOW);
  digitalWrite(OxigenoAlto, LOW);
  digitalWrite(OxigenoBajo, HIGH);
  delay(v);
  digitalWrite(OxigenoOptimo, LOW);
  digitalWrite(OxigenoAlto, HIGH);
  digitalWrite(OxigenoBajo, LOW);
  delay(v);
  digitalWrite(OxigenoOptimo, HIGH);
  digitalWrite(OxigenoAlto, LOW);
  digitalWrite(OxigenoBajo, LOW);
  delay(v);

}