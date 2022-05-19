/* fib.c
* Author:Scott Pavetti
* Date: 5/19/2022
* Simple source file used to test out
* automated builds and other basic things.
*/

#include <stdio.h>
#include <stdlib.h>

/*
* fib
* Recursive fibonacci function.
* No error checking whatsoever.
*/
int fib(int n) {
    if (n <= 2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

/* main
* Takes in a number that sets up the 
* fibonacci function to operate. Could
* use some error checking.
*/
int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Error: Insufficient arguments.\n");
        return -1;
    }
    int arg = atoi(argv[1]);
    printf("%d\n", fib(arg));
    return 0;
}
