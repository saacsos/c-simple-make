#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int mystery(int a, int b);

int main() 
{
    puts("Enter two positive integers: ");

    int x = readInt();
    int y = readInt();

    printf("The result is %d\n", mystery(x, y));
    return 0;
}

// What does the following program do?
int mystery(int a, int b)
{
    // base case
    if (1 >= b) {
        return a;
    } else { // recursive step
        return a + mystery(a, b - 1);
    }
}