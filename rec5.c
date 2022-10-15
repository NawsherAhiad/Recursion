#include<stdio.h>
///couting digits of a number ussing recursion


int cnt(int n)
{
    if(n==0) return 0;

    int res= cnt(n/10);
    return res+1;
}


int main()
{
    /*int n=43256, cnt=0;
    while(n!=0)
    {
        n=n/10;
        cnt++;

    }
    printf("%d", cnt);

    */
    int n=543;

    printf("%d",cnt(n));

}
