
#include<stdio.h>



int main()
{
    int a,b;
    int gcd=1;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        for(int i=2;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
    }
    else

    {
        for(int i=2;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
    }

    printf("%d", gcd);

}
