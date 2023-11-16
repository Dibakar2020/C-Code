#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Maximum and Minimum values for data types:\n");

    printf("char: [%d, %d]\n", CHAR_MIN, CHAR_MAX);
    printf("int: [%d, %d]\n", INT_MIN, INT_MAX);
    printf("long int: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("float: [%e, %e]\n", FLT_MIN, FLT_MAX);
    printf("double: [%e, %e]\n", DBL_MIN, DBL_MAX);

    return 0;
}
