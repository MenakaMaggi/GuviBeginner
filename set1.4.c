#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    printf("%c is an Alphabet",ch);
    else
    printf("ch is not an Alphabet",ch);
    return 0;
}
