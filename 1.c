#include<stdio.h>
#include<stdlib.h>

float suan(float inch)
{
     float cm;
     cm=inch*2.54;
     return (cm);
}

int main ()
{
    float a,b;
    printf("come on:");
    scanf("%f",&a);
    b=suan(a);
    printf("%.0finch=",a);
    printf("%.2fcm\n",b);
}

