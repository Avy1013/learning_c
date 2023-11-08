#include<stdio.h>
void display(int a,int b,int array[a][b]){ //function for printing a multidimentional array
    int i,j;
    for (i = 0; i < a; i++){
        for (int j = 0; j < b; j++)
        {
           printf("%d\t",array[i][j]) ;
        }
    printf("\n");
    }printf("Normal way\n");
    }
void display2(int a, int b, int *ptr) { //this is a program for presenting array with pointers
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", *(ptr + i * b + j));
            printf("%p\t", (ptr + i * b + j));
        }
        printf("\n");
    }
    printf("showing how the address change %p\n", ptr);
}
void display3(int a ,int b,int (*k)[b]){ // printed this with 2d pointer ig the best way
   for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", k[i][j]);
        }
        printf("\n");
    }
    printf("2d pointer\n");
}
void display4(int a, int b,int w[][b]){ //its same as int(*p)[4]
     int i,j;
    for (i = 0; i < a; i++){
        for (int j = 0; j < b; j++)
        {
           printf("%d\t",w[i][j]) ;
        }
    printf("\n");
    }printf("just another pointer way\n");
    }

int main(){
    int stud[4][4]={
        {1,2,12,11},
        {3,4,34,43},
        {5,6,56,65},
        {7,8,87,78}
    };  
    int (*p)[4]=stud;  //using the 2d pointer as this signifies that p is a array of 4 integers
    display(4,4,stud);
    display2(4,4,(int*)stud);
    display3(4,4,p);
    display4(4,4,stud);
}