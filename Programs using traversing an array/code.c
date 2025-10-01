#include <stdio.h>
int main(){
    int num,largest=-1,i;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("enter elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("the largest number in array is %d",largest);
}