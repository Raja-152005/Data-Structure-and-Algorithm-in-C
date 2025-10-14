#include<stdio.h>
void read(int n,int arr[]);
void smallest(int arr[10],int n);
int main(){
    int arr[20],num;
    printf("Enter the number of elements in array:");
    scanf("%d",&num);
    read(num,arr);
    smallest(arr,num);
}
void read(int n,int arr[10]){
    int i;
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void smallest(int arr[10],int n){
    int i=0;
    int small=123456;
    while(i<n){
        if(arr[i]<small){
            small=arr[i];
        }
        i++;
    }
    printf("The smallest number in array is:%d",small);
}