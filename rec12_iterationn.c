#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("not prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime");
    }
}
