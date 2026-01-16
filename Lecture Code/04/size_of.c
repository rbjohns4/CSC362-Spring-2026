#include <stdio.h>

int main() {
    // Size of basic data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

    // Size of an array
    int arr[5];
    printf("Size of int array (5 elements): %lu bytes\n", sizeof(arr));

    // Size of a structure
    struct Example {
        int x;
        double y;
        char z;
    };
    struct Example example;
    printf("Size of struct Example: %lu bytes\n", sizeof(example));

    return 0;
}




