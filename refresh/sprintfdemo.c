#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 10;
    char* str = malloc(sizeof(char)*3);
    sprintf(str,"%d",a);
    printf("%u",sizeof(char));
    printf("%u",sizeof(str));


return 0;
}
