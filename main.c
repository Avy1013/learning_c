 #include<stdio.h>
 #include<math.h>
 #include "revnum.h" // A way for using other program into this

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
    printf("enter your num: ");
    scanf("%d",&num); //using scanf
    power=pow(9,num);  //using maths module or libraries
    printf("power =%ld",power);
    w=num; //taking value for the while loop "esy"
    return power; //returning power here so i can use it in my main
}
 int main(){
   int adp=1+1+18+27;          //just power fun way to calculate
   printf("Hello world \n%d\n",adp); // hello world 
   conversion(); // hurray!😀 i called the function  
   long int v = power(); // using the power function and providing value to the revnum function...   
   long int x = revnum(v); //taken from revnum.h
   printf("\nReversed num: %ld\n",x);    
   return 0;
 }