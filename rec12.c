#include<stdio.h>

int if_prime(int n, int i)
{
    if(i==(n/2)+1)
    {
        return 0;
    }

    if(n%i==0)
    {
       return 1;

    }

    int flag= if_prime(n,i+1);
    return flag;

}


int main()
{
    int n;
    scanf("%d",&n);
   int ans= if_prime(n, 2);

   if(ans==0)
   {
       printf("prime");
   }
   else
   {
       printf("not prime");
   }




}
