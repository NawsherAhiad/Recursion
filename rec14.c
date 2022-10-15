#include<stdio.h>

int even_odd(int i, int n)
{
    if(i>n)
    {
        return n;
    }
    printf("%d ",i);
    int res=even_odd(i+2,n);

    return res;
}

int main()
{
    int n;
    scanf("%d",&n);

    //even_odd(2, n);
    even_odd(1, n);

}
