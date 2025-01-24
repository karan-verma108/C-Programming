#include <stdio.h>

const int N = 4;
float findAverage(int scores[]);

int main(void)
{
    int scores[N];
    int size = 0;

    while (size < N)
    {
        scores[size] = printf("Enter the %d score ", size + 1);
        scanf("%d", &scores[size]);
        size++;
    }

    printf("The average is %f", findAverage(scores));
}

float findAverage(int scores[])
{
    float result;

    for (int i = 0; i < N; i++)
    {
        result += scores[i];
    }

    result = result / (float)N;

    return result;
}
