#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[] = "hello";

    int len = 0;
    for(int i =0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);


}
