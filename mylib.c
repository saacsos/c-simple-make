#include "mylib.h"

int readInt() {
    char str[100];
    fgets(str, 99, stdin);
    return atoi(str);
}

float readFloat() {
    char str[100];
    fgets(str, 99, stdin);
    return atof(str);
}

char* readStr(int size) {
    char *value = (char *)malloc((size + 1) * sizeof(char));
    fgets(value, size, stdin);
    return value;
}

void printIntArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}