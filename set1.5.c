#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is the largest number",a);
    else if(b>c)
    printf("%d is the largest number",b);
    else
    printf("%d is the largest number",c);
    return 0;
}
