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
printf("https://docs.google.com/document/d/1z1g-EE1WZcUFq5c_C54nuJz3CduKEndlUEIp1OUT9hU/edit?usp=sharing\n");
    return 0;
}

