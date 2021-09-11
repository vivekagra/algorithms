#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void merge(int* arr, int l, int m, int r)
{
    int i,j,k;
    int n = r-l;
    int temp[n];
    i = l;
    j = m;
    k = 0;
    while(i<m && j<r)
    {
        if(arr[i]<arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(k=0;k<n;k++)
    {
        arr[l+k] = temp[k];
    }
}

void mergeSort(int *arr, int l, int r){
    if(r-l<=1)
    {
        return;
    }
    int m = (l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m,r);
    merge(arr,l,m,r);
    return 0;
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

    mergeSort(arr, 0, N);
    return 0;
}