#include"stdio.h"
void main(){
    int A[20],n,i;
    printf("Enter the number of elemenyts in the array\n");
    scanf("%d",&n);

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++) // executes n times
    scanf("%d",&A[i]); // const time c
    if(isArraySorted(A,n))
    {
        printf("Array is sorted\n");

    }
    else 
    printf("Array isnt sorted\n");

}
int isArraySorted(int A[],int n){
    if (n==1)
        return 1;
    else 
    return(A[n-1]<A[n-2]?0: isArraySorted(A,n-1));
}