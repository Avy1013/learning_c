 #include<stdio.h> // standard input output--preprocessor directives
 #include<math.h>
 #include "revnum.h" // A way for using other program into this
 #include "fory.h"
 #include "image.h"
 #include <stdlib.h> // Include this header for system

 int w=0,num; //global variables
 
int conversion() { //this is new funtion for understanding how does the promotion and demotion of int and float value works
    float nj=3.4;
    int i;
    i= nj*1;
    printf("%d\n",i); 
    return 0;
}
long int power(){    // just a function for using maths.h functions
    long int power;
    printf("for extra learning enter'10'_Enter your num: ");
    scanf("%d",&num); //using scanf
    power=pow(9,num);  //using maths module or libraries
    printf("power =%ld",power);
    w=num; //taking value for the while loop "esy"
    return power; //returning power here so i can use it in my main
}
int if_i_did_that(){ //note in c a "0" is considered false //ALSO IF U WANT DETAILED IF SEE PRACTICE.C
    int year;    
    printf("whats your lucky year: ");
    scanf("%d",&year);
    if (year%100==0)       //this fucked up coz 1900,2100 etc are not a leap year _why_well_idk_ exceptions!!
    {
        if (year%400==0){
            printf("ahoy leap year!!😆");
        }
        else
            printf("better lunk next time\n");
    }
    else
        if (year%4==0){
        printf("Ahoy leap year");
        }
        else    
            printf("sorry mate u are not leaping enough!!📉\n");
    return 0;
}
int esy(){ //for while //Also see implementaion for while in revnum.h
    int  u=0;
    while (w++<=9){ //remember post and pre increment in while....in post first it is compared and then incremented
    printf("%dko%d\n",u,w);
    u++;
}
return 0;
} 
void doesy(){  //for do while
 do {
    printf("\nThis is just dumb 'do while'!!\n");
 }while(0>1);
}
int gf_y_or_n(){ // see the implementation with continue in odd_for
    
    char l;
    do{
    printf("Do you have a gf (y/n): ");
    fflush(stdin);
    scanf("%c",&l);
    if (l=='n')
        {
           printf("Follow this guide:\nhttps://www.wikihow.com/Get-a-Girlfriend-Fast\n");
        }
   } while (l=='n');
    
    return 0;
}
    
int main(){
    int adp=1+1+18+27;          //just power fun way to calculate
    printf("Hello world \n%d\n",adp); // hello world 
    conversion(); // hurray!😀 i called the function  
    long int v = power(); // using the power function and providing value to the revnum function...   
    long int x = revnum(v); //taken from revnum.h
    printf("\nReversed num: %ld\n",x);    
    if_i_did_that(); //a program for checking a year is a leap or not 
    esy();
    doesy();
    fory(); // Needs knowledge of arrays >>> to see fory2 // its a program to understand "for" see header file// fory2 should be easy 
    if (num==10)
    {
        gf_y_or_n(); 
        image("images../img.jpeg"); // this was needed for the gf_y_or_n(); 
    }
    return 0;
 }