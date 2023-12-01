#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main() 
{
    puts("Enter two positive integers: ");
    char input_x[10], input_y[10];
    fgets(input_x, 9, stdin);
    fgets(input_y, 9, stdin);

    unsigned int x = atoi(input_x);
    unsigned int y = atoi(input_y);

    printf("The result is %u\n", mystery(x, y));
    return 0;
}