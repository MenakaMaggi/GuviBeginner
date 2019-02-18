#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a>0)
    printf("%d is positive",a);
    else if(a<0)
    printf("%d is negative",a);
    else if(a==0)
    printf("%d is zero",a);
    else
    return 0;
}
