#include<stdio.h>

int print_arr(int arr[], int i)
{
    if(i==0)
    {
        return arr[0];
    }

    int res= print_arr(arr,i-1);
    printf("%d ", res);

    return arr[i];
}


int main()
{

    int arr[6]={2, 4, 6, 8, 10, 12 };
    printf("%d ",print_arr(arr,6));
}


