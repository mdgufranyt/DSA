#include <stdio.h>
#include <stdlib.h>

int main() { // Corrected the function signature
    int k;
    int la[5] = {10, 20, 30, 15, 16}; // Added missing semicolon after array initialization

    k = 0;
    while (k <= 4) {
        printf("%d ", la[k]); // Added a space after %d for better formatting
        k = k + 1;
    }

    return 0; // Added return statement
}
