#include <stdio.h>

int main(void)
{

    char c = printf("Do you agree? ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed!");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed!");
    }
    else
    {
        printf("Please enter a valid response");
    }
}