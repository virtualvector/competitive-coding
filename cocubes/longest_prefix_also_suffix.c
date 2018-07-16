#include<stdio.h>
#include<stdlib.h>


int main()
{

char str[] = "aaaa";
int i;
int counter=0,flag=0;

for(i=3;i>=0;i--)
{
    int k;
    counter=0;
    for(k=0;k<i;k++)
    {
         printf("%c  %c\n",str[k],str[k+(4-i)]);
         counter++;
         if(str[k]!=str[k+(4-i)])
         {counter=0;break;}

    }
    if(k==i) {
        printf("counter is %d",counter);break;
    }

}


return 0;
}
