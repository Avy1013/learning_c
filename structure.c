#include <stdio.h>
struct book {
        char name;  
        float price;
        int pages;
    };
void display(struct book *poi){
    printf("%c %f %d\n",poi->name,poi->price,poi->pages);
}
int main() {
    
    
    struct book b[10];
    for (size_t i = 0; i < 2; i++)
    {
       printf("Enter names, price, and pages of 3 books:\n");
       scanf(" %c %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Book %d: %c, %f, %d\n",i, b[i].name, b[i].price, b[i].pages);
    }    
    display(&b[0]);
    return 0;
}
