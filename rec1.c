#include<stdio.h>

int print_num(int i)
{
    if(i==0)
    {
        return 0;
    }

    int res= 1+print_num(i-1);
    printf("%d ",res );
    return res;
}


int main()
{
    int n;
    scanf("%d",&n);/// n=5
    print_num(n);
}
