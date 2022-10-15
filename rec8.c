#include<stdio.h>

int max_func(int arr[], int n)
{
    if(n==0)return arr[n];

    int res=max_func(arr,n-1);
    if(res<=arr[n])
    {
        res=arr[n];
        return res;
    }
    else
    {
        return res;
    }
}

int main()
{
    int n=4;
    int arr[n]={4,6,3,5};

    printf("max is %d ",max_func(arr,n-1));

}
