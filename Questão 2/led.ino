int green = 2;
int red = 3;
int btn1 = 4;
int btn2 = 5;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);

  digitalWrite(green,LOW); // Inicia os LEDs desligados
  digitalWrite(red,LOW);
}

void loop() {
  int b1 = digitalRead(btn1);
  int b2 = digitalRead(btn2);

  if(b1 == LOW){
    digitalWrite(green,HIGH); // Alterna o estado do LED verde
    digitalWrite(red, LOW);
  }
  if(b2 == LOW){
    digitalWrite(red,HIGH); // Alterna o estado do LED vermelho
    digitalWrite(green, LOW);
  }
}
