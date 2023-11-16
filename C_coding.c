// Using the malloc standard library function, creating an array of hundred float elements

#include<stdio.h>
#include<stdlib.h>
int main()
{  // Using malloc to allocate memory for an array of 100 floats
    float*array;
    array=(float*)malloc(100*sizeof(float));
    
    // Printing the array elements
    printf("Array elements: ");
    for(int i=0; i<100; i++)
    {
        printf("%.2f ", array[i]);
        
    }

    printf("\n");


    // Don't forget to free the allocated memory when done using it
    free(array);

    return 0; // Return 0 to indicate successful execution

}
