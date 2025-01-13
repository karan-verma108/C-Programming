#include <stdio.h>

int main(void)
{
    int x = printf("Enter x ");
    scanf("%d", &x);
    int y = printf("Enter y ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("x is greater than y");
    }
    else if (x < y)
    {
        printf("x is less than y");
    }
    else
    {
        printf("x is equl to y");
    }

    return 0;
}