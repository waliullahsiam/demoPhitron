#include <stdio.h>

void fun(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 0)
        {
            sum += arr[i];
        }
    }

    printf("%d\n",sum);



}

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, n);
}