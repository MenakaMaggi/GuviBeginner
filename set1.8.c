#include <stdio.h>

int main()
{
    int i,n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of natural numbers:%d",sum);

    return 0;
}
