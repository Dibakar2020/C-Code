// Assigning the values 1^2 , 2^2 , . . ., 100^2 to the elements of this array

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

    // this code to work with the allocated array goes here

    
     // Assign values to the elements of the array (1^2, 2^2, ..., 100^2)
    for (int i = 0; i < 100; ++i) {
        floatArray[i] = (i + 1) * (i + 1);
    }

    // Print the array elements
    printf("Array elements:\n");
    for (int i = 0; i < 100; ++i) {
        printf("%.0f ", floatArray[i]);
    }


    // Don't forget to free the allocated memory when done using it
    free(floatArray);

    return 0; // Return 0 to indicate successful execution
}
