#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        // Skip even numbers
        if (i % 2 == 0) {
            continue;
        }

        // Print odd numbers
        printf("%d\n", i);
    }

    return 0;
}



