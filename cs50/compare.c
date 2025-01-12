#include<stdio.h>

int main(void){
    int x = printf("Enter x ");
    scanf("%d", &x);
    int y = printf("Enter y ");
    scanf("%d", &y);

    if(x > y){
        printf("x is greater than y");
    }else{
        printf("y is greater than x");
    }

    return 0;
}