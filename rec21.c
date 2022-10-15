#include<stdio.h>
///Write a program in C for binary search using recursion
int bin_search(int arr[], int key,int low, int high)
{
    if(arr[low+high/2]==key)
    {
        return low+high/2;
    }
    if(low>=high)
    {
        return -1;
    }
    else if(key>=arr[low+high/2])
        return bin_search(arr, key,(low+high)/2, high );

    else if(key<=arr[low+high/2])
        return bin_search(arr, key,low, (low+high)/2 );




}

int main()
{
    int arr[5]={4,6,8,9,10};
    int l=strlen(arr);
    int search;
    scanf("%d",&search);
    printf("%d",bin_search(arr, search,0, l-1));

}
