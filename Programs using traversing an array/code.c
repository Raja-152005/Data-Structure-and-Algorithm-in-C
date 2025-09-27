#include<stdio.h>
int main() {
    int i,n,num=0;
    printf("enter no. of digits:");
    scanf("%d",&n);
    int arr[n];
    printf("enter digits:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        num=num+arr[i];
        if(i==n-1)
           break;
        num=num*10;
    }
    printf("the number will be:%d",num);
}