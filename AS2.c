#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
   
    int result= gcd(a,b);
    printf("The GCD of %d and %d is: %d ",a,b,result);
    return 0;
}
