// Using the malloc standard library function, create an array of hundred float elements 

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc to allocate memory for an array of 100 floats
    float *floatArray = (float *)malloc(100 * sizeof(float));

    // Check if memory allocation was successful
    if (floatArray == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Return an error code
    }

    // Your code to work with the allocated array goes here

    // Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < 100; ++i) {
        printf("%.2f ", floatArray[i]);
    }
    printf("\n");

    // Don't forget to free the allocated memory when done using it
    free(floatArray);

    return 0; // Return 0 to indicate successful execution
}