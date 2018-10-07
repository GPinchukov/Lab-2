#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
int n=0; 
printf("Enter number of the mounth \n 1-January \n 2-February \n 3-March \n 4-April \n 5-May \n 6-June \n 7-July \n 8-August \n 9-September \n 10-October \n 11-November \n 12-December \n"); 
scanf("%d", &n); 
switch (n) 
{ 
case 1: printf("In January 30 days\n"); break; 
case 2: printf("In February 28/29 days\n"); break; 
case 3: printf("In March 31 days\n"); break; 
case 4: printf("In April 30 days\n"); break; 
case 5: printf("In May 31 days\n"); break; 
case 6: printf("In June 30 days\n"); break; 
case 7: printf("In July 31 days\n"); break; 
case 8: printf("In August 31 days\n"); break; 
case 9: printf("In September 30 days\n"); break; 
case 10: printf("In October 31 days\n"); break; 
case 11: printf("In November 30 days\n"); break; 
case 12: printf("In December 31 days\n"); break; 

default: printf("Invalid number entered"); break; 
} 
system("pause"); 
return 0; 
}
