
#include<stdio.h>
///GCD using recursion with typical concept
int gcd(int smoll, int bigg, int i)
{
   if(i==smoll)
   {
       return i;
   }


   int res = gcd(smoll,bigg, i+1);
   if(smoll%res==0 && bigg%res==0)
   {

       return res;

   }
   else
   {
       return i;
   }




}

int main()
{
    int a,b,gcd_res=1;
    scanf("%d%d",&a,&b);
    int ans;

    if( a<b)
    {
            ans =gcd(a,b,gcd_res);
    }
    else
    {
            ans =gcd(b,a,gcd_res);
    }

    int lcm= (a*b)/ans;
    printf("%d", lcm);
}
