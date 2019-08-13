#include<stdio.h>
#include<conio.h>
void main()
{
    int num,m,n;
    printf("Enter the value of m:");
    scanf("%d",&m);
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(num=m;num<=n;num++)
    {
        if(num%2==0)
        {
            printf("\t%d",num);
        }
      
    }
}
