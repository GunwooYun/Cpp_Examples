#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5];
    printf("%d\n", sizeof(a));

    int * b = (int *)malloc(sizeof(int)*5);
    printf("%d\n", sizeof(b));

    return 0;
}