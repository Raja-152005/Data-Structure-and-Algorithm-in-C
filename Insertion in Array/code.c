#include<stdio.h>
int main() {
    int num,i,n;
    int arr[20];
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("Enter elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be inserted");
    scanf("%d",&n);
    //shifting elements greater than n.
    for(i=num-1;i<num;i--){
        if(arr[i]>n){
            arr[i+1]=arr[i];
        }
        else{
            arr[i+1]=n;
            break;
        }
    }
    printf("Array after insertion:");
    for(i=0;i<num+1;i++){
        printf("%d ",arr[i]);
    }
}