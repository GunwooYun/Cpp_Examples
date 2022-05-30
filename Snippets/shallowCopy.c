#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    int * p;
}ST;

int main()
{
    ST s1, s2;
    s1.id = 100;
    s1.p = (int *)malloc(sizeof(int));

    *(s1.p) = 10;

    printf("s1 id : %d, p : %d\n", s1.id, *(s1.p));
    s2 = s1;
    printf("s2 id : %d, p : %d\n", s2.id, *(s2.p));

    *(s1.p) = 20;

    printf("s1 id : %d, p : %d\n", s1.id, *(s1.p));
    printf("s2 id : %d, p : %d\n", s2.id, *(s2.p));

    return 0;



}