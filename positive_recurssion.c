#include<stdio.h>
#include<stdlib.h>

int positive(int b, int i){
    if (b <= 1) {
        return 0; // Base case: stop when b is less than or equal to 1
    }

    if (b % i == 0) {
        printf("%d ", i);
        b = b / i;
        positive(b, i); // Continue factoring 'b' with the same 'i'
    } else {
        positive(b, i + 1); // Try the next number as a potential factor
    }
    return 0;
}

int main (){
    int a;
    scanf("%d", &a);
    positive(a, 2);
    return 0;
}
