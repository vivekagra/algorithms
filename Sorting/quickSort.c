#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int *arr, int l, int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int *arr, int l, int r)
{
    if(l<r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",arr+i);
    }

    quickSort(arr, 0,N-1);
    return 0;
}