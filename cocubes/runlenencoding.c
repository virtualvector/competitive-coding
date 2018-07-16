#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    char str[] = "aaaabbccccddeffff";

    for(int i=0;str[i]!='\0';i++)
    {
        char c = str[i];
        printf("%c",c);

        int j;
        for(j=i+1;str[j]==c;j++);
        if(j-i!=1) printf("%d",j-i);
        j--;
        i=j;


    }


return 0;
}
