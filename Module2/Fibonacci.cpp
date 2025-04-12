#include <stdio.h>

int main() {
    // Initialize the first two numbers of the Fibonacci sequence
    int first = 0, second = 1, next;

    // Print the first two numbers
    printf("Fibonacci sequence (first six numbers):\n");
    printf("%d, %d", first, second);

    // Calculate and print the next four numbers
    for (int i = 0; i < 4; i++) {
        next = first + second;  // Compute the next Fibonacci number
        printf(", %d", next);
        first = second;        // Update values for next iteration
        second = next;
    }

    printf("\n");  // End the line after output
    return 0;
}
