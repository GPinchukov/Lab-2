#include<stdio.h> 
void main() 
{ 
float x, y, x1, y1, x2, y2, r1, r2; 
printf("Vvedite x,y centra okruznosti, vvedite x1,y1,x2,y2 \n "); 

scanf(" %f %f %f %f %f %f",&x,&y,&x1,&y1,&x2,&y2); 
r1=sqrt(pow(x1,2)+pow(y1,2))-sqrt(pow(x,2)+pow(y,2)); 
r2=sqrt(pow(x2,2)+pow(y2,2))-sqrt(pow(x,2)+pow(y,2)); 
printf(" Radius %f", r1); 
if(r1==r2) printf (" \n tochka lezit na okruznosti"); 
else printf ("tochka ne lezit na okruznosti"); 
}
