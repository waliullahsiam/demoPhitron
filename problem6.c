#include<stdio.h>
#include<string.h>

void fun_string(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            if((str[i]-96)%2==0)
            {
                str[i]=str[i]-32;
            }
        }
    }


    puts(str);


}
int main()
{
    char str[100];

    gets(str);

    fun_string(str);
}