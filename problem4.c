#include<stdio.h>

void fun_area(int n)
{
    float pi=3.1416;

    float area=pi*n*n;

    printf("%f",area);
    return ;


}
int main()
{
    int r;

    scanf("%d",&r);

    fun_area(r);
}