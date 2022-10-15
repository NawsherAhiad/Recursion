#include<stdio.h>

int palindrome( char str[],int i, int l)
{
    printf("i=%d ,l=%d\n",i,l);
    if(i==l)
    {
        return 0;
    }

    if(str[i]!=str[l])
    {
        printf("yo  i=%d ,l=%d\n",i,l);
        return 1;
    }

    int res=palindrome(str, i+1, l-1);
    return res;

}
int main()
{
    char str[]="mom";
    int l= strlen(str);
    //printf("%d", l);
    int flag=palindrome(str,0, l-1);
    if(flag==0)
    {
        printf("palindrome");
    }
    else if (flag==1)
        printf("not palindrome");

}
