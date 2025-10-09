#include <stdio.h>
int main()
{
    int i, num1, num2,arr1[20], arr2[20], arr3[40], index=0,index_first=0,index_second=0;
    printf("Enter the elements of array1: ");
    scanf("%d", &num1);
    printf("Enter elements:");
    for (i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of array2: ");
    scanf("%d", &num2);
    printf("Enter elements:");
    for (i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // comparing values from arr1 to arr2 and store in arr3
    while(index_first<num1 && index_second<num2){
        if(arr1[index_first]<arr2[index_second]){
            arr3[index]=arr1[index_first];
            index_first++;
        }
        else{
            arr3[index]=arr2[index_second];
            index_second++;
        }
        index++;
    }
    // if elements of the first array is over and the second array has some elements
    if(index_first==num1){
        while(index_second<num2){
            arr3[index]=arr2[index_second];
            index_second++;
            index++;
        }
    }
    // if elements of the second array is over and the first array has some elements
    else if(index_second==num2){
        while(index_first<num1){
            arr3[index]=arr1[index_first];
            index_first++;
            index++;
        }
    }
    printf("Array after merging:");
    for(i=0;i<(num1+num2);i++){
        printf("%d ",arr3[i]);
    }
}
