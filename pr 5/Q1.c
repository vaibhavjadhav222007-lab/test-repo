#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer\n");
    scanf("%d", &n);
    printf("Even numbers up to %d is :\n",n);
    for(int i=0; i<=n; i++)
 
    {    if(i%2==0)
       {
           printf("%d",i);
       
  
       
        }      
    }

    return 0;
}
