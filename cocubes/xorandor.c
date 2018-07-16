#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    char str[10];
    scanf("%s",str);

    int val = str[0]-'0';
    int i=1;
    printf("%d\n",val);
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]=='A')
        {
            val = val&(str[i+1]-'0');
            printf("%d\n",val);
            i++;
        }
        else if(str[i]=='B')
        {
            val = val|(str[i+1]-'0');

            printf("%d\n",val);
        }
        else if(str[i]=='C')
        {val = val^(str[i+1]-'0');

            printf("%d\n",val);
        }

    }
    printf("%d",val);



}
