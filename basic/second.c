#include<stdio.h>

int main(){
    
    
    int num = printf("Enter a number ");
    scanf("%d", &num);
    printf("You entered : %d", num);

    // char firstName[10];
    // char lastName[10];

    // printf("Enter your first name ");
    // scanf("%9s", firstName); //using %9s instead of %s here as to tell the program that not more than 9 characters should be entered by the user without any gap. And we didn't pass in the ampersand (&) before the variable name because it's an array and for arrays in C, when we write it like in scanf we wrote with,  scanf("%9s", firstName); It basically replaces the array name with the memory address of the first element in the array because we need a pointer as the second parameter in scanf() method that's pointing to the memory location of the affacted variable.
    // printf("Enter your last name ");
    // scanf("%9s", lastName);
    // printf("Your name is %s %s", firstName, lastName);
    return 0;
}

