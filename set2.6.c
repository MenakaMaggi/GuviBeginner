#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,i,j,flag;
    printf("Enter the number n1:");
    scanf("%d",&n1);
    printf("Enter the number n2:");
    scanf("%d",&n2);
    while(n1<n2)
    {
        flag=0;
        for(i=2;i<=n1/2;++i)
        {
            if(n1%i==0)
            {
                flag=1;
                break;
                
            }
        }
        if(flag==0)
        printf("\t%d",n1);
        ++n1;
    }
    }
