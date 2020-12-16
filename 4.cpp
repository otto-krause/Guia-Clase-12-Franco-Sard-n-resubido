#include<stdio.h >
#include <stdlib.h>
 
int pres(int a, int b)
{
int pres;	
pres=a/b;
return pres;
}
 
int main()
{
int fuerza, area;
printf("Ingrese la fuerza ");
scanf("%d",&fuerza);
printf("Ingrese el area ");
scanf("%d",&area);
printf("la presion aplicada sobre la superfice es %d\n",pres(fuerza,area));
}
