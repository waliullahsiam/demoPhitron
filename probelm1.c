#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    int* a;
    int* b;

    a=&x;
    b=&y;

    float avg=(*a + *b)/2.0;

    printf("%.3f",avg);

}