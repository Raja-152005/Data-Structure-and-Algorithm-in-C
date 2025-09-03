#include <stdio.h>
int Fact(int n,int res); //Prototype Declaration
int fact(int n){
    return Fact(n,1);
}

int Fact(int n,int res){
    if(n==1)

      return res;
    return Fact(n-1,n*res);
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nFactorial of given number is: %d",fact(num));
    return 0;
}