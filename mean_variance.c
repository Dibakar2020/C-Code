#include <stdio.h>
#include <stdlib.h>

// Function to calculate mean and variance
float* calculateMeanAndVariance(const float* array, int length) {
    if (array == NULL || length <= 0) {
        return NULL; // Invalid input
    }

    float mean = 0.0;
    float variance = 0.0;

    // Calculate mean
    for (int i = 0; i < length; ++i) {
        mean += array[i];
    }
    mean /= length;

    // Calculate variance
    for (int i = 0; i < length; ++i) {
        variance += (array[i] - mean) * (array[i] - mean);
    }
    variance /= length;

    // Create an array to store the mean and variance
    float* result = (float*)malloc(2 * sizeof(float));
    if (result == NULL) {
        return NULL; // Memory allocation failed
    }

    // Assign mean and variance to the result array
    result[0] = mean;
    result[1] = variance;

    return result;
}

int main() {
    // Example usage
    float inputArray[] = {3.14, 2.3, 2.71, 4.5, 10.6};
    int length = sizeof(inputArray) / sizeof(inputArray[0]);

    // Call the function to calculate mean and variance
    float* result = calculateMeanAndVariance(inputArray, length);

    // Check if calculation was successful
    if (result != NULL) {
        printf("Mean: %.2f\n", result[0]);
        printf("Variance: %.2f\n", result[1]);

        // Don't forget to free the allocated memory
        free(result);
    } else {
        printf("Calculation failed. Invalid input or memory allocation error.\n");
    }

    return 0;
}

