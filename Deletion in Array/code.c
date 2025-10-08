#include<stdio.h>
int main(){
    int i,num,loc;
    int arr[20];
    printf("Enter the no. of elements");
    scanf("%d",&num);
    printf("Enter elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position from which the number has to be deleted");
    scanf("%d",&loc);
    // shifting elements left from loc+1 index.
    i=loc;
    while(i<num){
        arr[i]=arr[i+1];
        i++;
    }
    num--;
    printf("Array after deletion:");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}