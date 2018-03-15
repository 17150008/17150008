#include <stdio.h>
#include "limits.h"
int my_compute_factorial_rec ( int nb)
{
    long res=0;
    if(nb<=0)
        return 0;
    if(nb==1||nb==2)
        return 1;
    else
        return my_compute_factorial_rec(nb-1)+my_compute_factorial_rec(nb-2);
}

int main(void)
{
    int res;
    res=my_compute_factorial_rec(10);
    printf("%d \n",res);
    return 0;
}

