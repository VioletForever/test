#include"sort.h"

int partition(int a[], int p, int q)
{
    int x = a[p];
    int i = p;
    for (int j = 0; j < q; j++)
    {
        if(a[j] <= x)
        i++;
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    int tmp = a[i];
    a[i] = a[p];
    a[p] = tmp;
    return i;
}

void qsort(int a[], int p, int n)
{
    int r;
    if(p < n){
        r = partition(a,p,n);
        qsort(a, p, r);
        qsort(a, r+1, n);
    }
}

void quickSort(int a[], int n)
{
    qsort(a,0,n-1);
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printg("%d", a[i]);
    }

    
}