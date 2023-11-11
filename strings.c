#include <stdio.h>
#include <stdlib.h>

char* xcat() { //replacement of strcat function in stlib
    char source[] = "joker";
    static char target[30] = "crazy ";
  
    char *ptr = source;
    char *ptr2 = target;

    printf("%p\n", ptr2);

    // Move ptr2 to the end of target
    while (*ptr2 != '\0') {
        ptr2++;
    }

    printf("%p\n", ptr2);

    // Concatenate source into target
    while (*ptr != '\0') {
        *ptr2 = *ptr;
        ptr++;
        ptr2++;
    }

    // Add null terminator to target
    *ptr2 = '\0';

    return target; // Return the pointer to the modified string
}

int main() {
    char name[] = "Avy";
    char hello[10];
    char *ptr;
    ptr = name;
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    
    // Or we can just 
    printf("\t%s\n", name);

    // new way of getting and displaying strings
    // gets(hello); // should be not used as it does not check for overflow
    // use this instead
    printf("Enter a sentence or a character: ");
    fgets(hello, sizeof(hello), stdin);
    puts(hello);

    // Call xcat and use puts or printf to display the result
    char *answer = xcat();
    puts(answer);
    printf("%s",answer);

    return 0;
}
