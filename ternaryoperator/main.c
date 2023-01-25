#include <stdio.h>
#include <stdlib.h>

int prime(int x, int y){
    return(x>y)? x:y;
}
int main()
{
    int num = prime(5,9);
    printf("%d", num);
    return 0;
}
