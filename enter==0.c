#include <stdio.h>
#include <math.h>

// Function to input a float and handle Enter as 0
float enter_0() {
    float g;
    int c = getc(stdin);
    if (c == '\n') {
        g = 0;
    } else {
        ungetc(c, stdin); // Push the character back to the input stream
        scanf("%f", &g);
    }
    return g;
}

// Function to convert gaj and begas to square meters
int main() {
    float begas, gaj, area;
    printf("Enter the number of begas: ");
    begas = enter_0();
    fflush(stdin);
    printf("Enter the number of gaj: ");
    gaj = enter_0();

    float a = 2529.29 * begas;
    float m = 0.8281 * gaj;
    area = a + m;

    printf("Area in m^2 is: %f\n", area);
    int side_length = (int)sqrt(area); // this is used to floor the value
    /* int side_lenght = sqrt(area) //== here you are just demoting it to the  int */
    printf("If ideal, one meter side length would be: %d\n", side_length);
    return 0;
}