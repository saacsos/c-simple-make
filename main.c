#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main(void) 
{
    puts("Enter two positive integers: ");
    char input_x[10], input_y[10];
    gets(input_x);
    gets(input_y);

    unsigned int x = atoi(input_x);
    unsigned int y = atoi(input_y);

    printf("The result is %u\n", mystery(x, y));
}