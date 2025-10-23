#include<stdio.h>
int main()
{
    int num,rev=0,digit,temp;
     
    printf("Enter a number: ");
    scanf("%d", &num );

    temp=num;

    while(num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(temp==rev)
       printf("palindrome number\n");
    else
       printf("not a palidrom nmber\n");
    return 0;       
}