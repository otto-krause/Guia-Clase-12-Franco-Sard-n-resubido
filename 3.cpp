#include<stdio.h >
#include <stdlib.h>

int porh(int a, int b)
{
int porh;	
porh=a*100/b;
return porh;
}


int porm(int a, int b)
{
int porm;	
porm=a*100/b;
return porm;
}

int main()
{
int H, M, total;
printf("Ingrese la cantidad de hombres ");
scanf("%d",&H);
printf("Ingrese la cantidad de mujeres ");
scanf("%d",&M);
total=H+M;
printf("El porcentaje de hombres postulados es %d\n",porh(H,total));
printf("El porcentaje de mujeres postuladas es %d\n",porm(M,total));
}
