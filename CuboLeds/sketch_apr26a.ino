int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 
int Filas[] = {12, 11, 10};
void setup()
{
  int contador;
 
  for (int contador = 0; contador <9 ; contador++){
    pinMode(Columnas[contador], OUTPUT); }
 
  for (int contador = 0; contador < 3; contador++){
    pinMode(Filas[contador], OUTPUT); }
}
 
void loop()
{
 corrimientoColumna();   
 
 apagarTodo();
 caras();
}


void apagarTodo(){
  for(int i=0;i<3;i++)
    digitalWrite(Filas[i],LOW);
  for(int j=0;j<9;j++)
    digitalWrite(Columnas[j],LOW);
}

void caras(){
  int Col[] = {1,2,3,3,6,9,7,8,9,1,4,7};
  digitalWrite(Filas[0],HIGH);
  digitalWrite(Filas[1],HIGH);
  digitalWrite(Filas[2],HIGH);
  
  int cont=0;

  for(int i=0;i<4;i++){
    digitalWrite(Col[cont],HIGH);
    digitalWrite(Col[cont+1],HIGH);
    digitalWrite(Col[cont+2],HIGH);
    delay(150);
    digitalWrite(Col[cont],LOW);
    digitalWrite(Col[cont+1],LOW);
    digitalWrite(Col[cont+2],LOW);
    cont+=3;
  }


}


void corrimientoX(){
digitalWrite(Columnas[0],HIGH);
  digitalWrite(Filas[0],HIGH);
  digitalWrite(Columnas[4],HIGH);
  digitalWrite(Filas[1],HIGH);
  digitalWrite(Columnas[8],HIGH);
  digitalWrite(Filas[2],HIGH);
  
  digitalWrite(Columnas[6],HIGH);
  digitalWrite(Filas[0],HIGH);
  digitalWrite(Columnas[4],HIGH);
  digitalWrite(Filas[1],HIGH);
  digitalWrite(Columnas[2],HIGH);
  digitalWrite(Filas[2],HIGH);}
  
void corrimientoColumna(){
   for(int i=0;i<3;i++){
   digitalWrite(Columnas[0],HIGH);
   digitalWrite(Filas[i],HIGH);
   for(int j=1;j<9;j++){
     digitalWrite(Columnas[j],HIGH);
     digitalWrite(Filas[i],HIGH);
     delay(300);
     digitalWrite(Columnas[j],LOW);
     digitalWrite(Filas[i],LOW);
   }
   digitalWrite(Columnas[0],LOW);
   digitalWrite(Filas[i],LOW);
 }
}

 
