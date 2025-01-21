#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter a number greater than 1\n");
    scanf("%d",&num);
    for(int i = 1; i<=num; i++){
        sum +=i;
    }
    printf("The sum of numbers from 1 to %d is %d ", num, sum);
}