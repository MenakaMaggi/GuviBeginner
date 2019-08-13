#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        printf("\n %d",n*i);
    }
    return 0;
}
