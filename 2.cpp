#include<stdio.h >
#include <stdlib.h>
 
int lado1()
{
int a, b;
printf("Ingrese la altura del rectángulo ");
scanf("%d",&a);
return (a);
}
 
 
int lado2()
{
int b;
printf("Ingrese la base del rectangulo ");
scanf("%d",&b);
return (b);
}
 
int main()
{
int a, b, area, perimetro;
a = lado1();
b = lado2();
area=a*b;
perimetro=2*a+2*b;
printf("el area del rectangulo es %d\n",area);
printf("el perimetro del rectangulo es  %d\n",perimetro);
}


