
#include <stdio.h>
// *pointer means value at address
// whereas & means value of address

int main() {
    int i=3,*j,**k;
    j = &i;
    k = &j;
    printf("%p\n",k);
    printf("%p\n",&j);
    printf("%p\n",*k);
    printf("%p\n",&i);
}