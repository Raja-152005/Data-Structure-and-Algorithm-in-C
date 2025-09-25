#include <stdio.h>
int main(){
    int num,smallest=31000,i,index;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("enter elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            index=i;
        }
    }
   

    printf("the smallest number in array is %d at position %d",smallest,index);
}