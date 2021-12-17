// HIGH == APAGADO 0 VOLTIOS
// LOW == ENCENDIDO 5 VOLTIOS
//------------------------------------------------------------------------------------------------------------------------------

int pin1 = 7;
int pin2 = 8;
int pin3 = 9;
int pin4 = 10;
int pin5 = 11;
int pin6 = 12;
int pin7 = 13;

int pin8 = 14;
int pin9 = 15;
int pin10 = 16;
int pin11 = 17;
int pin12 = 18;
int pin13 = 19;
int pin14 = 20;
int pin15 = 21;

int boton15 = 0;

void setup() {
  pinMode (pin1, OUTPUT);
  pinMode (pin2, OUTPUT);
  pinMode (pin3, OUTPUT);
  pinMode (pin4, OUTPUT);
  pinMode (pin5, OUTPUT);
  pinMode (pin6, OUTPUT);
  pinMode (pin7, OUTPUT);
  pinMode (pin8, OUTPUT);
  pinMode (pin9, OUTPUT);
  pinMode (pin10, OUTPUT);
  pinMode (pin11, OUTPUT);
  pinMode (pin12, OUTPUT);
  pinMode (pin13, OUTPUT);
  pinMode (pin14, OUTPUT);
  pinMode (pin15, OUTPUT);
  Serial.begin(9600);
}

void loop() {
/*
  {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    delay(100);
  }
  {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    delay(100);
  }
  {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    delay(100);
  }
  {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    delay(100);
  }
  {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    delay(100);
  }
  {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    delay(100);
  }
  {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, LOW);
    delay(100);
  }
  */
  {
    boton15 = digitalRead(pin15);
    while (boton15 == LOW) {
      boton15 = digitalRead(pin15);
      if (boton15 == HIGH) {
        digitalWrite(pin8, LOW);
        digitalWrite(pin9, LOW);
        digitalWrite(pin10, LOW);
        digitalWrite(pin11, LOW);
        digitalWrite(pin12, LOW);
        digitalWrite(pin13, LOW);
        digitalWrite(pin14, LOW);
        Serial.println("ok");
      }
    }
  }
}
