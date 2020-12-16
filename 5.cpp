#include<stdio.h >
#include <stdlib.h>
 
int RT(int a, int b, int c, int d, int e)
{
int Rtotal;	
Rtotal=a+b+c+d+e;
return Rtotal;
}
 
int main()
{
int r1, r2, r3, r4, r5;
printf("Ingrese las resistencias ");
scanf("%d",&r1);
scanf("%d",&r2);
scanf("%d",&r3);
scanf("%d",&r4);
scanf("%d",&r5);
printf("r1=%d\n",r1);
printf("r2=%d\n",r2);
printf("r3=%d\n",r3);
printf("r4=%d\n",r4);
printf("r5=%d\n",r5);
printf("la resistencia total es %d\n",RT(r1,r2,r3,r4,r5));
}
