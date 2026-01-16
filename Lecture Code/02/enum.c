#include <stdio.h>

// Define an enumeration named 'Day'
enum Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    // Declare a variable of type 'enum Day'
    enum Day today;

    // Assign a value to the 'today' variable
    today = WEDNESDAY;

    // Switch statement using the enum
    switch (today) {
        case SUNDAY:
            printf("It's a relaxing day.\n");
            break;
        case MONDAY:
            printf("The start of the workweek.\n");
            break;
        case WEDNESDAY:
            printf("Halfway through the week!\n");
            break;
        default:
            printf("It's an ordinary day.\n");
    }

    return 0;
}


