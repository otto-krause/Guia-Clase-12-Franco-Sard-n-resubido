#include<stdio.h >
#include <stdlib.h>
 
int total(int a)
{
int t;	
t=a/8;
return t;
}
 
 
int main()
{
int num;
printf("Ingrese un numero ");
scanf("%d",&num);
printf("la octava parte es %d\n",total(num));
}

