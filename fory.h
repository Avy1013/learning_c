#include <stdio.h>

int fory() {
    int array[10] = {1,2,3,4,1,3,4,99,50,1}; // Assuming an array of size 10, you can change this size
    int counts[100] = {0}; // Assuming numbers in the range 0-99, adjust this size if needed

    // Input the array elements
    // printf("Enter 10 numbers into the array:\n");
    // for (int i = 0; i < 10; i++) {
    //     scanf("%d", &array[i]);
    //     if (array[i] < 0 || array[i] > 99) {
    //         printf("Error: Number out of range (0-99).\n");
    //         return 1; // Exit with an error code
    //     }
    // }
    
    /*This for loop is the thing to understands here we are incrementing the index of count array
    whenever 1 comes in array it increments the 1st index in count[] */ 
    for (int i = 0; i < 10; i++) {
        counts[array[i]]++;
        
    }

    // Display the counts
    printf("Number Counts:\n");
    for (int i = 0; i < 100; i++) {
        
        if (counts[i] > 0) {
            printf("%d: %d times\n", i, counts[i]);
        }
    }   
    return 0;
}
