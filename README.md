# Autores
João Victor Francisco de Barros

Kemily Rezende Silva

# Resumo
O relatório centrou-se no estudo e aplicação dos conceitos de entradas e saídas em microcontroladores, utilizando a plataforma Wokwi em conjunto com o Arduino. Através de quatro exercícios práticos, exploramos desde a configuração básica de displays LCD até o controle de contadores com displays de sete segmentos e botões. O uso do Wokwi como ferramenta de simulação proporcionou uma experiência de aprendizado imersiva e prática na elaboração e teste de circuitos eletrônicos, destacando a importância das entradas e saídas em projetos de eletrônica embarcada.

# Introdução
Este trabalho tem como objetivo fornecer uma compreensão aprofundada dos conceitos fundamentais de entradas e saídas em microcontroladores por meio de quatro simulações realizadas na plataforma Wokwi utilizando o Arduino. Para o mesmo, foram propostos os seguintes exercícios:
1. Hello world.
2. Circuito com 2 leds conectados.
3. Circuito com display de 7 seguimentos exibindo o número 9.
4. Circuito com display de 7 seguimentos contando de 0 a 9.
## Wokwi
O Wokwi é uma plataforma de simulação gratuita que oferece suporte a uma ampla variedade de placas, incluindo Arduino, ESP32 e STM32, entre outras. Com uma interface intuitiva, os usuários podem projetar e simular circuitos eletrônicos complexos diretamente no navegador, arrastando e soltando componentes e programando microcontroladores. Com recursos avançados de simulação, o Wokwi permite testar projetos e depurar problemas antes da implementação em hardware real.

# Metodologia
Para cada um dos exercícios propostos, foi desenvolvido um circuito conectado a um **Arduino Uno**, acompanhado do código `.ino` que opera a parte lógica da aplicação.

## 1. Hello, World!
Neste exercício foi proposto simular o circuito Olá, mundo no Arduino.
O circuito inclui um display **LCD 16x2 I2C**, conforme ilustrado na imagem abaixo:
<figure>
<img src="Questão 1/Hello.png"/>
<figcaption> Circuito Hello, World!</figcaption>
</figure>
Para desenvolver o algoritmo foi necessário instalar a biblioteca `LiquidCrystal_I2C.h`, que permite operar o display. A lógica consiste em escrever a mensagem “Hello, World!” no display, caracter a caracter. Implementado conforme o código a seguir:

```#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Inicia o LCD e ativa o modo de piscar do cursor.
  lcd.init(); 
  lcd.blink();
}

int i = 0;
char *msg = "Hello, World!";
void loop() {
  // Escreve a mensagem "Hello, World!" caracter por caracter.
  if (i < strlen(msg)) {
    lcd.setCursor(i+1, 0);
    lcd.print(msg[i]);
    i++;
  }
  delay(120);
}```

Disponível em: https://wokwi.com/projects/393436890856871937

## 2. Circuito com 2 leds conectados.
Neste exercício foi proposto construir um circuito com dois botões e dois LEDs, um vermelho e outro verde, em que quando um botão é pressionado o LED vermelho acende enquanto o verde fica apagado e ao pressionar o outro isso se inverte, acendendo o verde e apagando o vermelho.
Os componentes foram conectados de acordo com a imagem:
<figure>
<img src="Questão 2/LEDs.png"/>
<figcaption> Circuito Dois LEDs!</figcaption>
</figure>
O algoritmo controla dois LEDs (um verde e um vermelho) com base em dois botões. Quando o botão verde é pressionado, o LED verde acende e o vermelho apaga. Por outro lado, quando o botão vermelho é pressionado, o LED vermelho acende e o verde apaga. Em resumo, o código alterna os LEDs conforme os botões são pressionados, demonstrando o uso de entradas e saídas em um projeto Arduino. Implementado conforme o código a seguir:

```// Variáveis representando os LEDs e botões de acordo com as entradas da placa
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
}```

Disponível em: https://wokwi.com/projects/393439714258112513

## 3. Circuito com display de 7 seguimentos exibindo o número 9.
Neste exercício, a proposta foi conectar um display de 7 segmentos à placa e exibir o número 9. O objetivo era criar um algoritmo que definisse as saídas necessárias e uma função nine que determinasse quais segmentos estarão ligados e desligados para representar o número 9, conforme ilustrado na imagem abaixo.
<figure>
<img src="Questão 3/nine.png"/>
<figcaption> Circuito do Display de 7 segmentos para exibir o número 9.</figcaption>
</figure>
Para alcançar esse objetivo, foi necessário configurar as saídas adequadas e desenvolver a função `nine`, responsável por determinar os segmentos que devem estar ativos para exibir o número 9 no display. Implementado conforme o código a seguir:

```// Onde cada segmento do display está conectado
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
void setup() {
  // Define-os como saídas
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void nine(){
  // Função que mostra o número 9 no display
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void loop() {
  // chama a função
  nine();
}```

Disponível em: https://wokwi.com/projects/393471100470938625

## 4. Circuito com display de 7 seguimentos contando de 0 a 9.
Neste exercício, a tarefa consistiu em conectar um display de 7 segmentos à placa e criar um contador de 0 a 9 controlado por dois botões, um para incrementar e outro para decrementar o valor, conforme mostrado na imagem abaixo.
<figure>
<img src="Questão 4/counter.png"/>
<figcaption> Circuito do Display de 7 segmentos para contar de 0 a 9.</figcaption>
</figure>
Para desenvolver o algoritmo, foi necessário configurar as entradas e saídas apropriadas e definir as funções para exibir cada número no display. Além disso, foi essencial elaborar a lógica do contador, lendo cada um dos botões para aumentar ou diminuir o valor. Ao atingir o valor -1, o contador retorna a 9, e ao alcançar 10, retorna a 1, criando um loop contínuo. Implementado conforme o código a seguir:

```// Onde cada segmento do display está conectado
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
}```

Disponível em: https://wokwi.com/projects/393472748362845185

# Conclusões
O trabalho proporcionou uma abordagem prática e teórica dos conceitos essenciais de entradas e saídas em microcontroladores por meio da plataforma Wokwi em conjunto com o Arduino. Os quatro exercícios desenvolvidos permitiram explorar circuitos eletrônicos de diferentes complexidades, desde acionamentos simples de LEDs até o controle de displays de sete segmentos e botões. A utilização do Wokwi demonstrou ser crucial, oferecendo uma simulação precisa e acessível que possibilitou a compreensão detalhada dos circuitos e a aplicação direta dos conceitos aprendidos.

Cada exercício apresentou desafios únicos, incentivando o desenvolvimento de habilidades práticas e a compreensão teórica dos circuitos eletrônicos. A plataforma Wokwi serviu como uma ferramenta valiosa para o aprendizado, facilitando a construção e teste de circuitos complexos e estimulando a criatividade no campo da eletrônica embarcada. Em suma, este trabalho destacou a importância das simulações virtuais na educação e no desenvolvimento de projetos com microcontroladores, fornecendo uma base sólida para futuras explorações e aplicações práticas.

# Referências
[1]  WOKWI. Documentação Wokwi. Disponível em: https://docs.wokwi.com/pt-BR/. Acesso em: 02/03/2024.
