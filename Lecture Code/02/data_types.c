#include <stdio.h>

int main() {
    // Integer types
    int integerVar = 42;
    printf("Integer Variable: %d\n", integerVar);

    short shortVar = 32767;
    printf("Short Variable: %hd\n", shortVar);

    long longVar = 123456789012345;
    printf("Long Variable: %ld\n", longVar);

    // Floating-point types
    float floatVar = 3.14;
    printf("Float Variable: %f\n", floatVar);

    double doubleVar = 2.71828;
    printf("Double Variable: %lf\n", doubleVar);

    // Character type
    char charVar = 'A';
    printf("Character Variable: %c\n", charVar);

    // Unsigned integer types
    unsigned int unsignedIntVar = 100;
    printf("Unsigned Integer Variable: %u\n", unsignedIntVar);

    // Other types
    _Bool boolVar = 1; // or use 'true' from stdbool.h
    printf("Boolean Variable: %d\n", boolVar);

    // Void type (no value)
    void *voidPointer = NULL;
    printf("Void Pointer: %p\n", voidPointer);

    return 0;
}
