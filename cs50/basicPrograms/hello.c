#include <stdio.h>

int main(void)
{
    char name[10];
    printf("Enter your name\n");
    scanf("%s", &name);
    printf("Hello, %s", name);
}