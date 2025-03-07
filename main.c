#include <stdio.h>
#include "add.h"
#include<sub.h>
int main()
{
    int x=5,y=4;
    printf("Sum=%d\n",sum(x,y));
    printf("sub is %d",sub(x,y));
    return 0;
}