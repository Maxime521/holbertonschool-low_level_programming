#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator
    int n = rand() % (2 * RAND_MAX + 1) - RAND_MAX; // Random number in the range [-RAND_MAX, RAND_MAX]

    printf("The number is: %d\n", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

