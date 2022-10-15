#include<stdio.h>
int main()
{
    char str[]="wxwxwxw";
    int l=strlen(str);
    //printf("%d ",l);

    int flag=0;
    for(int i=0;i<3;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("palindrome");
    }
    else
        printf("not palindrome");


}
