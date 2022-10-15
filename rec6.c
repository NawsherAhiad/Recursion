
#include<stdio.h>
///sum of digits of a number ussing recursion


int cnt(int n)
{
    if(n/10==0) return n;

    int res= (n%10)+cnt(n/10);
    return res;
}


int main()
{
    int n=543;

    printf("%d",cnt(n));

}
