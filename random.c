#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int n, x;

    srand(time(0));
    n = rand() -RAND_MAX / 2;
    x = n % 10;

if(x > 5) 
{
    printf("el numero random es %d \n el ultimo digito es %d\n y es mayor que 5\n", n, x);
}
    
else if(x == 0) 
{
    printf("el  numero random es %d \n  el ultimo digito es %d \n y es igual a 0\n ", n, x);
}
else 
{
    printf("el numero random es %d \n el ultimo digito es %d \n y es menor a 5 \n ", n, x);
}


return (0);



}