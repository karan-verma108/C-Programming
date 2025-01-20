#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
}