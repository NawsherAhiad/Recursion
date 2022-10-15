#include<stdio.h>
int dectobin(int n)
{
    if(n==0)
    {
        return 0;
    }

    int bin=n%2;
    int res= dectobin(n/2);
    printf("%d",bin);
    return res;
}

int main()
{
    int n;
    scanf("%d",&n);

    dectobin(n);
}
