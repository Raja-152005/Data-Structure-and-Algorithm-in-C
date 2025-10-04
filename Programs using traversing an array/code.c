#include<stdio.h>
int main()
{
    int i,num;
    printf("number of elements in array:");
    scanf("%d",&num);
    int arr[num];  
    for(i=0;i<num;i++){
        printf("%d element: ",i+1);
        scanf("%d",&arr[i]);     
    }
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}