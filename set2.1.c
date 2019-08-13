#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,p;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the exponent:");
    scanf("%d",&k);
    p=pow(n,k);
    printf("The power of the number=%d",p);
}
