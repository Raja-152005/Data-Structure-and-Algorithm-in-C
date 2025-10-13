#include<stdio.h>
void read1(int n,int arr1[]);
void read2(int n,int arr2[]);
void merge(int n1,int n2,int arr1[],int arr2[]);
void display_reverse(int n,int arr3[]);
int main(){
    int arr1[20],num1,arr2[20],num2;
    printf("Enter the number of elements in first array:");
    scanf("%d",&num1);
    read1(num1,arr1);
    printf("Enter the number of elements in second array:");
    scanf("%d",&num2);
    read2(num2,arr2);
    merge(num1,num2,arr1,arr2);
    
}
void read1(int n,int arr1[20]){
    int i;
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
}

void read2(int n,int arr2[20]){
    int i;
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
}
void merge(int n1,int n2,int arr1[20],int arr2[20]){
    int arr3[40];
    int i=0;
    int j=0;
    while(i<n1){
        arr3[i]=arr1[i];
        i++;
    }
    while(j<n2){
        arr3[i]=arr2[j];
        j++;
        i++;
    }
    display_reverse(n1+n2,arr3);
}
void display_reverse(int n,int arr3[40]){
    int i;
    printf("\n Reversed merged array will be:");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr3[i]);
    }
}
