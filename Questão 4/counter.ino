// Onde cada segmento do display está conectado
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
// Onde os botões estão conectados 
int green = 10;
int blue = 11;
int op;
void setup() {
  // Define cada segmento como saída 
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  // Define os botões como saídas 
  pinMode(green, INPUT_PULLUP);
  pinMode(blue, INPUT_PULLUP);
  op = 0;
}

void zero(){
  // Função que mostra o número 0 no display 
  digitalWrite(g,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
}

void one(){
  // Função que mostra o número 1 no display
  digitalWrite(a,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}

void two(){
  // Função que mostra o número 2 no display
  digitalWrite(c,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}

void three(){
  // Função que mostra o número 3 no display
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(g,LOW);
}
void four(){
  // Função que mostra o número 4 no display
  digitalWrite(a,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void five(){
  // Função que mostra o número 5 no display
  digitalWrite(b,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void six(){
  // Função que mostra o número 6 no display
  digitalWrite(b,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void seven(){
  // Função que mostra o número 7 no display
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}

void eight(){
  // Função que mostra o número 8 no display
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void nine(){
  // Função que mostra o número 9 no display
  digitalWrite(e,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void loop() {
  // Lê a entrada dos botões 
  int rGreen = digitalRead(green);
  int rBlue = digitalRead(blue);
  if (rGreen == LOW) op = op-1; // Botão verde diminui
  if (rBlue == LOW) op = op+1; // Botão azul aumenta
  if(op == 0){ // Exibe 0
    zero();
  }
  else if(op == 1){ // Exibe 1
    one();
  }
  else if(op == 2){ // Exibe 2
    two();
  }
  else if(op == 3){ // Exibe 3
    three();
  }
  else if(op == 4){ // Exibe 4
    four();
  }
  else if(op == 5){ // Exibe 5
    five();
  }
  else if(op == 6){ // Exibe 6
    six();
  }
  else if(op == 7){ // Exibe 7
    seven();
  }
  else if(op == 8){ // Exibe 8
    eight();
  }
  else if(op == 9){ // Exibe 9
    nine();
  }
  else if (op > 9) op = 0; // Quando maior que 9 volta a 0
  else if (op < 0) op = 9; // Quando menor que zero volta a 9
  delay(100);
}
