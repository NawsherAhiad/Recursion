#include<stdio.h>

int str_rev(char str[], int n, int i)
{
    if(i==n+1)
    {
        return n;
    }


    int pos= str_rev(str,n, i+1);
    printf("%c",str[pos]);
    return pos-1;
}


int main()
{
    char str[]="abcde";

    str_rev(str, strlen(str)-1, 0);
}
