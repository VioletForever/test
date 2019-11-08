#include<stdio.h>

int main()
{
    int a[8]={6,3,7,8,2,1,5,4};

    for(int i=1;i<8;i++){
        int key = a[i];

        int j=i-1;

        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }

    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
}