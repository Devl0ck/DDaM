#include <8051.h>

void main() 
{
 int i, j = 0;
 unsigned char array[9];
 TMOD = 0x1; 
 array[0] = 0x0; 
 array[1] = 0x1; 
 array[2] = 0x2;
 array[3] = 0x4;
 array[4] = 0x8;
 array[5] = 0x10;
 array[6] = 0x20;
 array[7] = 0x40;
 array[8] = 0x80;
 P1 = array[0];

 while(1)
  {
  	if(j == 0)
   {
  	P1 = array[4] + array[5];
  	while (P30 == 0 && i < 529) {i++;}
 	if(P30 == 1 && j <= 4){
 	j++; 
  	if(j == 4) {j = 0;}
   }
   i = 0;
   P1 = array[3] + array[6];
   while (P30 == 0 && i < 529) {i++;}
   if(P30 == 1 && j <= 4){
   j++; 
   if(j == 4) {j = 0;}
  }
  
    i = 0;
    P1 = array[2] + array[7];
    while (P30 == 0 && i < 1589) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}

   }
   	i = 0;
   	P1 = array[1] + array[8];
   	while (P30 == 0 && i < 2647) {i++;}
   	if(P30 == 1 && j <= 4){
   	j++; 
   	if(j == 4) {j = 0;}
   }
   	i = 0;
   }
    if(j == 1){
    P1 = array[1] + array[2];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[3] + array[4];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[5] + array[6];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[7] + array[8];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
   i = 0;
  }

    if(j == 2){
    P1 = array[1];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[2];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;;
    P1 = array[3];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[4];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[5];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[6];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[7];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
   i = 0;
    P1 = array[8];
    while (P30 == 0 && i < 500) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
  }

    if(j == 3){
    P1 = array[1] + array[3];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[2] + array[4];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[5] + array[7];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
    i = 0;
    P1 = array[6] + array[8];
    while (P30 == 0 && i < 1000) {i++;}
    if(P30 == 1 && j <= 4){
    j++; 
    if(j == 4) {j = 0;}
   }
   i = 0;
  }
 } 
}