# Resumo

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
Para desenvolver o algoritmo foi necessário instalar a biblioteca `LiquidCrystal_I2C.h`, que permite operar o display. A lógica consiste em escrever a mensagem “Hello, World!” no display, caracter a caracter.
Disponível em: https://wokwi.com/projects/393436890856871937

## 2. Circuito com 2 leds conectados.
Neste exercício foi proposto construir um circuito com dois botões e dois LEDs, um vermelho e outro verde, em que quando um botão é pressionado o LED vermelho acende enquanto o verde fica apagado e ao pressionar o outro isso se inverte, acendendo o verde e apagando o vermelho.
Os componentes foram conectados de acordo com a imagem:
<figure>
<img src="Questão 2/LEDs.png"/>
<figcaption> Circuito Hello, World!</figcaption>
</figure>
O algoritmo controla dois LEDs (um verde e um vermelho) com base em dois botões. Quando o botão verde é pressionado, o LED verde acende e o vermelho apaga. Por outro lado, quando o botão vermelho é pressionado, o LED vermelho acende e o verde apaga. Em resumo, o código alterna os LEDs conforme os botões são pressionados, demonstrando o uso de entradas e saídas em um projeto Arduino.
Disponível em: https://wokwi.com/projects/393439714258112513

## 3. Circuito com display de 7 seguimentos exibindo o número 9.

## 4. Circuito com display de 7 seguimentos contando de 0 a 9.

# Conclusões

# Referências
[1]  WOKWI. Documentação Wokwi. Disponível em: https://docs.wokwi.com/pt-BR/. Acesso em: 02/03/2024.
