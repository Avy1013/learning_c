#include<stdio.h>
#include <stdlib.h> // Include the <stdlib.h> header for system

//don't forget to change the path
void image(const char *filePath){
    
      //const char *filePath = "img.jpeg"; // Replace with the path to your file

    // Use the system() function to open the file with the default application
    const char *command = "open ";
    char fullCommand[256];  // Make sure it's large enough to hold the full command

    snprintf(fullCommand, sizeof(fullCommand), "%s%s", command, filePath);

    printf("Hello\n");

    int result = system(fullCommand);
      
}