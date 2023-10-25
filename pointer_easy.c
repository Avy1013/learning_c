
// * pointer means value at address
// whereas & means value of address

#include <stdio.h>
void areaperi(int r,float *a,float *p){
    *a=3.14*r*r;
    *p=2*3.14*r;
}
void call_by_reference(){ //as we know return statement cannot return two value pointers solve it
    int radius;
    float area,perimeter;
    printf("enter the radius: ");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("area= %f",area);
    printf("\nperimeter= %f\n",perimeter);
}

int main() {
    int i=3,*j,**k;
    j = &i;
    k = &j;
    printf("Address of j: %p\n",k);
    printf("Address of j: %p\n",&j);
    printf("Address of i(As '*' means value at address): %p\n",*k);
    printf("Address of i: %p\n",&i);
    call_by_reference();
}
