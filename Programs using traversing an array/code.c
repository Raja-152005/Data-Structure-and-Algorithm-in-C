#include <stdio.h>
int main(){
    int i,mean,n,sum=0;
    printf("enter no. of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of an array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    mean=sum/n;
    printf("mean of array:%d",mean);
    return 0;
}