#include <stdio.h>

int getGridSize(void);
void printGrid(int size);

int main(void)

{
    // get size of grid from user
    int n = getGridSize();

    // print the grid(s)
    printGrid(n);
}
int getGridSize(void)
{
    int n;
    do
    {
        n = printf("Size : ");
        scanf("%d", &n);
    } while (n < 1);
    return n;
}

void printGrid(int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = 0; j <= size - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
