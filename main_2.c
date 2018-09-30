#include <stdio.h> 
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

void main() 
{ 
float x1, y1, x2, y2, x3, y3 ,r1, r2, r3; 
printf("Vvedite x,y tochki A,  x,y tochki B, x,y tochki C \n "); 
scanf(" %f %f  %f %f %f  ",&x1, &y1, &x2, &y2, &x3, &y3); 
r1=sqrt(pow(x1,2)+pow(y1,2)); 
r2=sqrt(pow(x2,2)+pow(y2,2)); 
r3=sqrt(pow(x3,2)+pow(y3,2)); 
if ((r1==r2)||(r2==r3)||(r1==r3)) printf(" dve ili bolee tochek nahodyatsa na odinakovom rastoyanii"); 
else
if (r1<r2 && r1<r3) printf("tochka A blize k nachalu koordinat");
else 
if (r2<r1 && r2<r3) printf("tochka B blize k nachalu koordinat"); 
else   
if (r3<r2 && r3<r1) printf("tochka C blize k nachalu koordinat"); 



}
