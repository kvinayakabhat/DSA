#include<stdio.h>

int fib();

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    fib(n);
    printf("fib number is %d",fib(n));
    
    }
    
    int fib(int n){
    if(n<0)
    return -1;
    else if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else if(n==2)
    return 1;
    else 
    return (fib(n-1) + fib(n-2));
    
    
}