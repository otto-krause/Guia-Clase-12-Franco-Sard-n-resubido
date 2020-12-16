#include<stdio.h >
#include <stdlib.h>
 
int NumM(int a, int b)
{
int NM;
if(a<b)
{
NM=b;
}
else
{
NM=a;
}
return (NM);
}
 
int main()
{
int Num=0, Num1=0;
printf("Ingrese un numero ");
scanf("%d",&Num);
printf("Ingrese otro numero ");
scanf("%d",&Num1); 
if(Num==Num1)
{
printf("son iguales");	
}
else 
{
printf("El numero mayor es %d",NumM(Num, Num1));
}
}

