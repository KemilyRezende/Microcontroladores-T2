// Variáveis representando os LEDs e botões de acordo com as entradas da placa
int green = 2;
int red = 3;
int btn1 = 4;
int btn2 = 5;

void setup() {
  // Definição das entradas e saídas 
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);

  // Inicia os LEDs desligados
  digitalWrite(green,LOW); // Inicia os LEDs desligados
  digitalWrite(red,LOW);
}

void loop() {
  // Lê a entrada dos botões
  int b1 = digitalRead(btn1);
  int b2 = digitalRead(btn2);

  // Se o botão verde for pressionado o LED verde acende e o vermelho apaga
  if(b1 == LOW){
    digitalWrite(green,HIGH); // Alterna o estado do LED verde
    digitalWrite(red, LOW);
  }

  // Se o botão vermelho é pressionado o LED vermelho acende e o verde apaga.
  if(b2 == LOW){
    digitalWrite(red,HIGH); // Alterna o estado do LED vermelho
    digitalWrite(green, LOW);
  }
}
