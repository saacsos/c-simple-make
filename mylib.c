#include "mylib.h"

// What does the following program do?
unsigned int mystery(unsigned int a, unsigned int b)
{
    // base case
    if (1 >= b) {
        return a;
    } else { // recursive step
        return a + mystery(a, b - 1);
    }
}