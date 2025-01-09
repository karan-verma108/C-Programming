#include<stdio.h> //#include is a preprocessor directive (it's a command that instructs the preprocessor to perform specific tasks before the actual compilation of the program, it starts with an # symbol, as #include in this case.) in C programming that allows us to include the contents of another file into our program. And here that another file is this stdion.h which basically is an input output header file. This header file contains the declarations for standard input output functions and one of those functions is this printf() that we're using here. So to use this printf() function, we must include this stdio.h file. 

//Now when we write #include<stdio.h>, notice that we used angle brackets at start and end, this is because it's indicating we're importing/including this file which is present in the system directory.

//If we wanted to include a file which is present in the root of our current folder, then we can use it like with double quotes as follows:  #include"ourFileName". So it's worth nothing that,

//If we use it like this #include"stdio.h" it would still work because when double quotes are used here, in this case the compiler gives priority to the local enviornment and it will first search for stdio.h library/file locally in our root folder but if it doesn't find it there so it will start to search it in the system environment, where exactly this file stdio.h is actually present.

//But make sure that you dont create a file with the same name as stdio.h locally and use double quotes while importing stdio.h because in that case the compiler will take in the local stdio.h file which essentially wont contain the standard input/output functions printf(). So it's recommened to always use angle brackets while including a file/library/module unless you want to include your own personal file



int main(void) {
    printf("Hello, World new again 4!");
    return 0;
}