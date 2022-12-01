#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int my_arr[a];
    for(int i=0;i<a;i++)scanf("%d",my_arr+i);


    for(int i=0;i<a;i++)printf("%d ",*(my_arr+i));




}