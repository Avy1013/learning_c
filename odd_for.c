#include<stdio.h>
//some time we don't know how many times we need to run the loop 
// this is a implemetation with "for" loop and also showing how continue can be used
// see the implementation with do while in main.c
int main() {
    char l;
    int count = 1;

    for (int i = 0; i < count;) {
        printf("Do you have a gf (y/n): ");
        scanf(" %c", &l); // Notice the space before %c

        if (l == 'y') {
            i++;
            continue;
        }

        printf("GO TO GYM YOU MF\n");
    }
printf("This explains a very minute yet a useful thing\n");
printf("https://chat.openai.com/share/026abc76-f355-46c5-a092-0da1bdfe562f\n");
    return 0;
}

