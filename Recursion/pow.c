#include<stdio.h>
#include<math.h>

int mypow(int x,int n){
    if(n==0)
    return 1;
    else
    {
    return  x*mypow(x,n-1);

    }

}

int main()
{
    int x,n;
    
    printf("Enter the base and the power: ");
    scanf("%d %d",&x,&n);
    mypow(x,n);
    printf("%d",mypow(x,n));
}