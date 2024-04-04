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
Para desenvolver o algoritmo foi necessário instalar a biblioteca `LiquidCrystal_I2C.h`, que permite operar o display. A lógica consiste em escrever a mensagem “Hello, World!” no display, caracter a caracter.

Disponível em: https://wokwi.com/projects/393436890856871937

## 2. Circuito com 2 leds conectados.
Neste exercício foi proposto construir um circuito com dois botões e dois LEDs, um vermelho e outro verde, em que quando um botão é pressionado o LED vermelho acende enquanto o verde fica apagado e ao pressionar o outro isso se inverte, acendendo o verde e apagando o vermelho.
Os componentes foram conectados de acordo com a imagem:
<figure>
<img src="Questão 2/LEDs.png"/>
<figcaption> Circuito Dois LEDs!</figcaption>
</figure>
O algoritmo controla dois LEDs (um verde e um vermelho) com base em dois botões. Quando o botão verde é pressionado, o LED verde acende e o vermelho apaga. Por outro lado, quando o botão vermelho é pressionado, o LED vermelho acende e o verde apaga. Em resumo, o código alterna os LEDs conforme os botões são pressionados, demonstrando o uso de entradas e saídas em um projeto Arduino.

Disponível em: https://wokwi.com/projects/393439714258112513

## 3. Circuito com display de 7 seguimentos exibindo o número 9.
Neste exercício, a proposta foi conectar um display de 7 segmentos à placa e exibir o número 9. O objetivo era criar um algoritmo que definisse as saídas necessárias e uma função nine que determinasse quais segmentos estarão ligados e desligados para representar o número 9, conforme ilustrado na imagem abaixo.
<figure>
<img src="Questão 3/nine.png"/>
<figcaption> Circuito do Display de 7 segmentos para exibir o número 9.</figcaption>
</figure>
Para alcançar esse objetivo, foi necessário configurar as saídas adequadas e desenvolver a função `nine`, responsável por determinar os segmentos que devem estar ativos para exibir o número 9 no display.
Disponível em: https://wokwi.com/projects/393471100470938625

## 4. Circuito com display de 7 seguimentos contando de 0 a 9.
Neste exercício, a tarefa consistiu em conectar um display de 7 segmentos à placa e criar um contador de 0 a 9 controlado por dois botões, um para incrementar e outro para decrementar o valor, conforme mostrado na imagem abaixo.
<figure>
<img src="Questão 4/counter.png"/>
<figcaption> Circuito do Display de 7 segmentos para contar de 0 a 9.</figcaption>
</figure>
Para desenvolver o algoritmo, foi necessário configurar as entradas e saídas apropriadas e definir as funções para exibir cada número no display. Além disso, foi essencial elaborar a lógica do contador, lendo cada um dos botões para aumentar ou diminuir o valor. Ao atingir o valor -1, o contador retorna a 9, e ao alcançar 10, retorna a 1, criando um loop contínuo.

Disponível em: https://wokwi.com/projects/393472748362845185

# Conclusões
O trabalho proporcionou uma abordagem prática e teórica dos conceitos essenciais de entradas e saídas em microcontroladores por meio da plataforma Wokwi em conjunto com o Arduino. Os quatro exercícios desenvolvidos permitiram explorar circuitos eletrônicos de diferentes complexidades, desde acionamentos simples de LEDs até o controle de displays de sete segmentos e botões. A utilização do Wokwi demonstrou ser crucial, oferecendo uma simulação precisa e acessível que possibilitou a compreensão detalhada dos circuitos e a aplicação direta dos conceitos aprendidos.


# Referências
[1]  WOKWI. Documentação Wokwi. Disponível em: https://docs.wokwi.com/pt-BR/. Acesso em: 02/03/2024.
