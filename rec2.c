#include<stdio.h>

int print_num(int i)
{
    if(i==1)
    {
        return 1;
    }

    int res= i+print_num(i-1);


    return res;
}


int main()
{
    int n;
    scanf("%d",&n);/// n=5
    printf("%d",print_num(n));
}

