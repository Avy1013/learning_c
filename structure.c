#include <stdio.h>
int main() {
    struct book {
        char name;  // Using an array for the book name
        float price;
        int pages;
    };
    
    struct book b1, b2, b3;
    
    printf("Enter names, price, and pages of 3 books:\n");
    
    // Input for book 1
    scanf(" %c %f %d", &b1.name, &b1.price, &b1.pages);
    
    // Input for book 2
    scanf(" %c %f %d", &b2.name, &b2.price, &b2.pages);
    
    // Input for book 3
    scanf(" %c %f %d", &b3.name, &b3.price, &b3.pages);
    
    printf("Book 1: %c, %.2f, %d\n", b1.name, b1.price, b1.pages);
    printf("Book 2: %c, %.2f, %d\n", b2.name, b2.price, b2.pages);
    printf("Book 3: %c, %.2f, %d\n", b3.name, b3.price, b3.pages);

    return 0;
}
