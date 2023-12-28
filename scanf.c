// It could prove usefull if u wanna do something like what i did in cs-50
// scanf returns the info about how many inputs it has succesfully got
//for example
#include <stdio.h>
#include <stdlib.h>

void image();
int main() {
    int num1, num2;

    printf("Enter two numbers separated by a space: ");

    // Use scanf to read two inputs and store the return value
    int inputsRead = scanf("%d %d", &num1, &num2);

    // Check if scanf successfully read two inputs
    if (inputsRead == 2) {
        printf("Two numbers were entered successfully:\n");
        printf("Number 1: %d\n", num1);
        printf("Number 2: %d\n", num2);
        image();
    } else {
        printf("Error: Invalid input. Please enter two numbers separated by a space.\n");
    }
    

    return 0;
}
// similar to this there is a cin version too








void image(){
    
     const char *filePath = " images../Screenshot.jpg "; // Replace with the path to your file

    // Use the system() function to open the file with the default application
    const char *command = "open ";
    char fullCommand[256];  // Make sure it's large enough to hold the full command

    snprintf(fullCommand, sizeof(fullCommand), "%s%s", command, filePath);

    int result = system(fullCommand);
      
}