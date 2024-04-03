int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int green = 10;
int blue = 11;
int op;
void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(green, INPUT_PULLUP);
  pinMode(blue, INPUT_PULLUP);
  op = 0;
}

void zero(){
  digitalWrite(g,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
}

void one(){
  digitalWrite(a,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}

void two(){
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
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(g,LOW);
}
void four(){
  digitalWrite(a,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void five(){
  digitalWrite(b,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void six(){
  digitalWrite(b,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void seven(){
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}

void eight(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void nine(){
  digitalWrite(e,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void loop() {
  int rGreen = digitalRead(green);
  int rBlue = digitalRead(blue);
  if (rGreen == LOW) op = op-1; // Botão verde diminui
  if (rBlue == LOW) op = op+1; // Botão azul aumenta
  if(op == 0){
    zero();
  }
  else if(op == 1){
    one();
  }
  else if(op == 2){
    two();
  }
  else if(op == 3){
    three();
  }
  else if(op == 4){
    four();
  }
  else if(op == 5){
    five();
  }
  else if(op == 6){
    six();
  }
  else if(op == 7){
    seven();
  }
  else if(op == 8){
    eight();
  }
  else if(op == 9){
    nine();
  }
  else if (op > 9) op = 0;
  else if (op < 0) op = 9;
  delay(100);
}
