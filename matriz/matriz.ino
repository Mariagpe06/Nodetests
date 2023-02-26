#include "LedControl.h" 

LedControl lc=LedControl(11,13,10,1);  // crea objeto

int T;
int pinBtn = 4,pinBtn2 = 5;
//-------------------------Izquierda-Derecha------------------------------
byte iz_0[8]= {
B00000000,
B00000001,
B00000001,
B00000000,
B00000000,
B10000000,
B10000000,
B00000000};

byte iz_1[8]= {
B00000001,
B00000011,
B00000011,
B00000001,
B10000000,
B11000000,
B11000000,
B10000000};

byte iz_2[8]= {
B00000010,
B00000111,
B00000111,
B00000010,
B01000000,
B11100000,
B11100000,
B01000000};

byte iz_3[8]= {
B00000100,
B00001111,
B00001111,
B00000100,
B00100000,
B11110000,
B11110000,
B00100000};

byte iz_4[8]= {
B00001001,
B00011111,
B00011111,
B00001001,
B10010000,
B11111000,
B11111000,
B10010000};

byte iz_5[8]= {
B00010010,
B00111111,
B00111111,
B00010010,
B01001000,
B11111100,
B11111100,
B01001000};

byte iz_6[8]= {
B00100100,
B01111110,
B01111110,
B00100100,
B00100100,
B01111110,
B01111110,
B00100100};

byte iz_7[8]= {
B01001000,
B11111100,
B11111100,
B01001000,
B00010010,
B00111111,
B00111111,
B00010010};

byte iz_8[8]= {
B10010000,
B11111000,
B11111000,
B10010000,
B00001001,
B00011111,
B00011111,
B00001001};

byte iz_9[8]= {
B00100000,
B11110000,
B11110000,
B00100000,
B00000100,
B00001111,
B00001111,
B00000100};

byte iz_10[8]= {
B01000000,
B11100000,
B11100000,
B01000000,
B00000010,
B00000111,
B00000111,
B00000010};

byte iz_11[8]= {
B10000000,
B11000000,
B11000000,
B10000000,
B00000001,
B00000011,
B00000011,
B00000001};

byte iz_12[8]= {
B00000000,
B10000000,
B10000000,
B00000000,
B00000000,
B00000001,
B00000001,
B00000000};

//-------------------------Ambar------------------------------

byte amb[8]= {
B00011001,
B00100110,
B01000110,
B10001001,
B10010001,
B01100010,
B01100100,
B10011000};

//-------------------------Arriba-Abajo------------------------------


byte ar_0[8]= {
  B00000110,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B01100000
};

byte ar_1[8]= {
  B00001111,
B00000110,
B00000000,
B00000000,
B00000000,
B00000000,
B01100000,
B11110000
};

byte ar_2[8]= {
B00000110,
B00001111,
B00000110,
B00000000,
B00000000,
B01100000,
B11110000,
B01100000  
};

byte ar_3[8]= {
B00000110,
B00000110,
B00001111,
B00000110,
B01100000,
B11110000,
B01100000,
B01100000  
};

byte ar_4[8]= {
B00001111,
B00000110,
B00000110,
B01101111,
B11110110,
B01100000,
B01100000,
B11110000  
};

byte ar_5[8]= {
  B00000110,
B00001111,
B01100110,
B11110110,
B01101111,
B01100110,
B11110000,
B01100000
};

byte ar_6[8]= {
B00000000,
B01100110,
B11111111,
B01100110,
B01100110,
B11111111,
B01100110,
B00000000  
};

byte ar_7[8]= {
B01100000,
B11110000,
B01100110,
B01101111,
B11110110,
B01100110,
B00001111,
B00000110  
};

byte ar_8[8]= {
B11110000,
B01100000,
B01100000,
B11110110,
B01101111,
B00000110,
B00000110,
B00001111  
};

byte ar_9[8]= {
B01100000,
B01100000,
B11110000,
B01100000,
B00000110,
B00001111,
B00000110,
B00000110  
};

byte ar_10[8]= {
B01100000,
B11110000,
B01100000,
B00000000,
B00000000,
B00000110,
B00001111,
B00000110  
};

byte ar_11[8]= {
  B11110000,
B01100000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000110,
B00001111
};

byte ar_12[8]= {
B01100000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000110  
};


void setup() {
  attachInterrupt(digitalPinToInterrupt(2), iz, RISING);
  attachInterrupt(digitalPinToInterrupt(3), ar, RISING);
  lc.shutdown(0,false);     // enciende la matriz
  lc.setIntensity(0,1);     // establece brillo
  lc.clearDisplay(0);     // blanquea matriz
  pinMode(pinBtn, INPUT);
  pinMode(pinBtn2, INPUT);  
}

void loop(){
  //-------------------------ARRIBA-ABAJO------------------------------
  if(T == 0){
     if( digitalRead(pinBtn) ==1 ){
        mostrar_13();
        delay(1000);
     }
      mostrar_0();
      delay(50);
      mostrar_1();
      delay(50);
      mostrar_2();
      delay(50);
      mostrar_3();
      delay(50);
      mostrar_4();
      delay(50);
      mostrar_5();
      delay(50);
      mostrar_6();
      delay(50);
      mostrar_7();
      delay(50);
      mostrar_8();
      delay(50);
      mostrar_9();
      delay(50);
      mostrar_10();
      delay(50);
      mostrar_11();
      delay(50);
      mostrar_12();
      delay(50);
}


//-------------------------Arriba-Abajo------------------------------

  if(T == 1){
     if( digitalRead(pinBtn2) == 1 ){
        mostrar_13();
        delay(1000);
     }
    mostrar_14();
    delay(50);
    mostrar_15();
    delay(50);
    mostrar_16();
    delay(50);
    mostrar_17();
    delay(50);
    mostrar_18();
    delay(50);
    mostrar_19();
    delay(50);
    mostrar_20();
    delay(50);
    mostrar_21();
    delay(50);
    mostrar_22();
    delay(50);
    mostrar_23();
    delay(50);
    mostrar_24();
    delay(50);
    mostrar_25();
    delay(50);
    mostrar_26();
    delay(50);
}
} 
void iz()
{
  T = 0;
}
void ar()
{
  T = 1;
}

//-------------------------Izquierda-derecha-----------------------------------------------
void mostrar_0(){     
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_0[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_1(){     
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_1[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_2(){   
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_2[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_3(){     
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_3[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_4(){   
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_4[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_5(){   
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_5[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_6(){ 
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_6[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_7(){     
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_7[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_8(){ 
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_8[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_9(){ 
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_9[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_10(){
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_10[i]);    // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_11(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_11[i]);    // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_12(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,iz_12[i]);    // establece fila con valor de array cero en misma posicion
  }
}

//-------------------------Ambar------------------------------
void mostrar_13(){      
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,amb[i]);    // establece fila con valor de array cero en misma posicion
  }
}

//----------------------------Arriba-Abajo---------------------------------------------

void mostrar_14(){    
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_0[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_15(){    
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_1[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_16(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_2[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_17(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_3[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_18(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_4[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_19(){
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_5[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_20(){      
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_6[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_21(){    
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_7[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_22(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_8[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_23(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_9[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_24(){    
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_10[i]);    // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_25(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_11[i]);    // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_26(){  
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,ar_12[i]);    // establece fila con valor de array cero en misma posicion
  }
}
