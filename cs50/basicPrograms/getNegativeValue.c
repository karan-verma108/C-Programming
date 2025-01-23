#include <stdio.h>

int getNegativeInt(void);

int main(void)
{
    int i = getNegativeInt();
    printf("The negative number is %d", i);
}

int getNegativeInt()
{
    int n;
    do
    {
        n = printf("Enter a negative number ");
        scanf("%d", &n);
    } while (n > 0);
    return n;
}