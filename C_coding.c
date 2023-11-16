// Here I calculate the mean and variance of the array that I constructed in step 2  
#include<stdio.h>
#include<stdlib.h>
void mean_variance(float *array, int length, float *relust);
int main()
{  // Using malloc to allocate memory for an array of 100 floats
    float*array;
    array=(float*)malloc(100*sizeof(float));

    for( int i=0; i<100; i++)
    {
        array[i]=(i+1)*(i+1);
    }
    float result[2]; // initializing the length of the array
    mean_variance(array, 100, result);

    // Print mean and variance
    printf("Mean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

    return 0; // Return 0 to indicate successful execution

}

void mean_variance(float *given_array, int length, float *relust)
{
    float mean = 0.0;
    float variance = 0.0;
    // calculating mean value 
    for( int i=0; i<length; i++)
    {
        mean += given_array[i];
    }
    mean /=length;

    // calculating varriance of array 
    for( int i=0; i<length; i++)
    {
        variance += (given_array[i] - mean)*(given_array[i] - mean);
    }
    variance /= length;
    // assign the result to the output array 
    relust[0]=mean;
    relust[1]=variance;
}
