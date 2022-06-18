#include <stdio.h>

int main()
{

    int x;

printf("digite el numero: ");
scanf("%i",&x);

if (x > 0)
{
    printf("el numero es positivo\n");
}
else if(x < 0)
{
    printf("el numero es negativo\n");
}
else
{
    printf("el numero es 0\n");
}
    return 0;
}
