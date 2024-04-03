#include <LiquidCrystal_I2C.h>

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
}
