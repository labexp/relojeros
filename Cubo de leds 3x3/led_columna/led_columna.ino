int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 
int Filas[] = {12, 11, 10};
int RandFila;     //Variable para fila aleatoria
int RandColumna;  //Variable para columna aleatoria



int i = 0;
int pinPotenciometro =A0;
int valorPotenciometro = 0;

void setup()
{
  int contador;
 
  for (int contador = 0; contador < 9; contador++){
    pinMode(Columnas[contador],OUTPUT);
     }
 
  for (int contador = 0; contador < 3; contador++){
    pinMode(Filas[contador], OUTPUT); 
}
}
void loop()
{
valorPotenciometro = analogRead(pinPotenciometro);
apagarLeds();
if (valorPotenciometro==0) apagarLeds();
else if (valorPotenciometro >= 10 && valorPotenciometro < 120) {digitalWrite(Columnas[0], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro >= 125 && valorPotenciometro < 230 ){ digitalWrite(Columnas[1], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro >= 240 && valorPotenciometro < 350){digitalWrite(Columnas[2], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro >= 360 && valorPotenciometro < 460){digitalWrite(Columnas[3], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro >= 470 && valorPotenciometro < 560){digitalWrite(Columnas[4], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro >= 570 && valorPotenciometro < 680){digitalWrite(Columnas[5], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro >= 690 && valorPotenciometro < 790){digitalWrite(Columnas[6], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro  >= 800 && valorPotenciometro < 850){digitalWrite(Columnas[7], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro  >= 860 && valorPotenciometro < 1010){digitalWrite(Columnas[8], HIGH);digitalWrite(Filas[0], HIGH);digitalWrite(Filas[1], HIGH);digitalWrite(Filas[2], HIGH);}
else if (valorPotenciometro == 1023) encenderLeds();
}
void apagarLeds()  
{
  
    for (int contador = 0; contador < 9; contador++){
  digitalWrite(Columnas[contador], LOW);
     }
 
  
}
void encenderLeds()
{
    for (int contador = 0; contador < 9; contador++){
  digitalWrite(Columnas[contador], HIGH);
     }
}
