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

void selectionSort(int *arr, int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr, i, j);
            }
        }
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

    selectionSort(arr, N);
    return 0;
}