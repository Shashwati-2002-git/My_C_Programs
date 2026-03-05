// C program to calculate the sum of the digits of a number using recursion.
#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10) + sum(n/10);
}
int main()
{
    int n;
    char c;
    do{
        printf("\nEnter a number: ");
            scanf("%d",&n);
        printf("\nThe sum of the digits of %d is: %d",n,sum(n));
        return 0;
        printf("\nDo you want to continue? (y/n): ");
            scanf(" %c",&c);
    }while(c=='y'||c=='Y');
}