#include <stdio.h>

int main(void)
{
    long long num1, num2; // using long type (writing it twice to indicate the compiler that we can to use 64 bit memory (writing long once means 32 bit))
    printf("Enter first number ");
    scanf("%lld", &num1);
    printf("Enter second number ");
    scanf("%lld", &num2);

    printf("The sum is : %lld", num1 + num2);
}