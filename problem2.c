#include<stdio.h>

void swap_num(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
   int n;
   scanf("%d",&n);
    
    int my_arr[n];

    for(int i=0;i<n;i++)scanf("%d",&my_arr[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(my_arr[i]>my_arr[j])
            {
                swap_num(&my_arr[i],&my_arr[j]);
            }
        }
    }


    for(int i=0;i<n;i++)printf("%d ",my_arr[i]);


  

}