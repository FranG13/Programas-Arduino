int F1 = 1;
int Flecha Arriba = 2;
int Flecha Abajo = 3;
int F2 = 4;
int STOP/AUTO = 5;

int Led N = 6;
int Led V = 7;
int Led R = 8;

bool estado_boton1 = 0;
bool estado_boton2 = 0;
bool estado_boton3 = 0;
bool estado_boton4 = 0;
bool estado_boton5 = 0;

bool estado_botonN = 0;
bool estado_botonV = 0;
bool estado_botonR = 0;

void setup() {
 pinMode(F1,INPUT);
 pinMode(Flecha Arriba,INPUT);
 pinMode(Flecha Abajo,INPUT);
 pinMode(F2,INPUT);
 pinMode(STOP/AUTO);
 pinMode(Led N,OUTPUT);
 pinMode(Led V,OUTPUT);
 pinMode(Led R,OUTPUT);
 serial.begin(3600);
 
}

void loop() {

digitalWrite(Led N,HIGH);
digitalWrite(Led V,HIGH);
digitalWrite(Led R,HIGH);
delay(3000);
serial.println("Los leds funcionan correctamente");

}
