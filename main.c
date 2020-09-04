/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int missingNumber(int arr[],int n)
{
    int m=n+1;
    int total = m*(m+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    sum+= arr[i];
     return total-sum;
}

int main()
{
    int arr[]={1,2,4,6,3,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("%d",missingNumber(arr,n));
    return 0;
}
