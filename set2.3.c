#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==2)
    printf("yes");
    else
    printf("no");
}
