int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int Filas[] = {12, 11, 10};
int i = 0;
int pinPotenciometro =A0;
int valorPotenciometro = 0;

void setup()
{
  int contador;
 
  for (int contador = 0; contador < 9; contador++){
    pinMode(Columnas[contador], OUTPUT); }
 
  for (int contador = 0; contador < 3; contador++){
    pinMode(Filas[contador], OUTPUT); }
}
void loop()
{
  valorPotenciometro = analogRead(pinPotenciometro);
  apagarLeds();
 if (valorPotenciometro >= 0 && valorPotenciometro < 5)apagarLeds(); 
 else if (valorPotenciometro > 6 && valorPotenciometro < 37) { digitalWrite(Columnas[0], HIGH);  digitalWrite(Filas[0], HIGH);}
 else if (valorPotenciometro > 38 && valorPotenciometro < 75){digitalWrite(Columnas[3], HIGH); digitalWrite(Filas[2], HIGH);}.
 else if (valorPotenciometro > 76 && valorPotenciometro < 113){digitalWrite(Columnas[6], HIGH); digitalWrite(Filas[2], HIGH);} 
 else if (valorPotenciometro > 114 && valorPotenciometro < 151){digitalWrite(Columnas[3], HIGH); digitalWrite(Filas[0], HIGH);} 
 else if (valorPotenciometro > 152 && valorPotenciometro < 189){digitalWrite(Columnas[6], HIGH); digitalWrite(Filas[1], HIGH);}
 else if (valorPotenciometro > 190 && valorPotenciometro < 227){digitalWrite(Columnas[5], HIGH); digitalWrite(Filas[0], HIGH);} 
 else if (valorPotenciometro > 228 && valorPotenciometro < 265){ digitalWrite(Columnas[0], HIGH);  digitalWrite(Filas[2], HIGH);}
 else if (valorPotenciometro > 266 && valorPotenciometro < 303){digitalWrite(Columnas[1], HIGH); digitalWrite(Filas[1], HIGH);}
 else if (valorPotenciometro > 304 && valorPotenciometro < 341){digitalWrite(Columnas[1], HIGH); digitalWrite(Filas[0], HIGH);} 
 
 else if (valorPotenciometro > 342 && valorPotenciometro < 379){digitalWrite(Columnas[8], HIGH); digitalWrite(Filas[1], HIGH);} 
 else if (valorPotenciometro > 380 && valorPotenciometro < 417){digitalWrite(Columnas[7], HIGH); digitalWrite(Filas[0], HIGH);} 
 else if (valorPotenciometro > 418 && valorPotenciometro < 455){digitalWrite(Columnas[2], HIGH); digitalWrite(Filas[1], HIGH);} 
 else if (valorPotenciometro > 456 && valorPotenciometro < 493){digitalWrite(Columnas[3], HIGH); digitalWrite(Filas[1], HIGH);} 
 else if (valorPotenciometro > 494 && valorPotenciometro < 531) {digitalWrite(Columnas[8], HIGH); digitalWrite(Filas[2], HIGH);}
 else if (valorPotenciometro > 532 && valorPotenciometro < 569){digitalWrite(Columnas[5], HIGH); digitalWrite(Filas[1], HIGH);} 
 else if (valorPotenciometro > 570 && valorPotenciometro < 607){digitalWrite(Columnas[4], HIGH); digitalWrite(Filas[0], HIGH);} 
 else if (valorPotenciometro > 608 && valorPotenciometro < 645){digitalWrite(Columnas[5], HIGH); digitalWrite(Filas[2], HIGH);} 
 else if (valorPotenciometro > 646 && valorPotenciometro < 683){ digitalWrite(Columnas[0], HIGH);  digitalWrite(Filas[1], HIGH);}
 
 else if (valorPotenciometro > 684 && valorPotenciometro < 721) {digitalWrite(Columnas[6], HIGH); digitalWrite(Filas[0], HIGH);} 
 else if (valorPotenciometro > 722 && valorPotenciometro < 759) {digitalWrite(Columnas[2], HIGH); digitalWrite(Filas[0], HIGH);}
 else if (valorPotenciometro > 760 && valorPotenciometro < 797){digitalWrite(Columnas[2], HIGH); digitalWrite(Filas[2], HIGH);} 
 else if (valorPotenciometro > 798 && valorPotenciometro < 835) {digitalWrite(Columnas[8], HIGH); digitalWrite(Filas[0], HIGH);} 
 else if (valorPotenciometro > 836 && valorPotenciometro < 873){digitalWrite(Columnas[4], HIGH); digitalWrite(Filas[2], HIGH);} 
 else if (valorPotenciometro > 874 && valorPotenciometro < 911){digitalWrite(Columnas[7], HIGH); digitalWrite(Filas[1], HIGH);}
 else if (valorPotenciometro > 912 && valorPotenciometro < 949){digitalWrite(Columnas[1], HIGH); digitalWrite(Filas[2], HIGH);}
 else if (valorPotenciometro > 950 && valorPotenciometro < 987){digitalWrite(Columnas[7], HIGH); digitalWrite(Filas[2], HIGH);} 
 else if (valorPotenciometro > 988 && valorPotenciometro < 1022){digitalWrite(Columnas[4], HIGH); digitalWrite(Filas[1], HIGH);} 
 else if (valorPotenciometro==1023)encenderLeds();
  
}  
void apagarLeds()
{
   for (int contador = 0; contador < 9; contador++){
   digitalWrite(Columnas[contador], LOW); }
 
  for (int contador = 0; contador < 3; contador++){
    digitalWrite(Filas[contador], LOW);}
  
}
void encenderLeds()
{  for (int contador = 0; contador < 9; contador++){
   digitalWrite(Columnas[contador], HIGH); }
 
  for (int contador = 0; contador < 3; contador++){
    digitalWrite(Filas[contador], HIGH);}  
}
