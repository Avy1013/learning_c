#include <stdio.h>
int main() {
    struct book {
        char name;  // Using an array for the book name
        float price;
        int pages;
    };
    
    struct book b[10];
    for (size_t i = 0; i < 3; i++)
    {
       printf("Enter names, price, and pages of 3 books:\n");
       scanf(" %c %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Book %d: %c, %f, %d\n",i, b[i].name, b[i].price, b[i].pages);
    }
    return 0;
}
