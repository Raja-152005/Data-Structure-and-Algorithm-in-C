#include<stdio.h>
int main(){
    int i,num1,num2,num3,arr1[20],arr2[20],arr3[40],index;
    printf("Enter the elements of array1: ");
    scanf("%d",&num1);
    printf("Enter elements:");
    for(i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of array2: ");
    scanf("%d",&num2);
    printf("Enter elements:");
    for(i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }
    //copying elements from arr1 to arr3
    for(i=0;i<num1;i++){
        arr3[i]=arr1[i];
    }
    index=num1;
    //copying elements from arr2 to arr3
    for(i=0;i<num2;i++){
        arr3[index]=arr2[i];
        index++;
    }
    num3=index;
    printf("After merging:");
    for(i=0;i<num3;i++){
        printf("%d ",arr3[i]);
    }

}