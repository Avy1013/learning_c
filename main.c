 #include<stdio.h>
 int conversion() { //this is new funtion for understanding how does the promotion and demotion of int and float value works
    float nj=3.4;
    int i;
    i= nj*1;
    printf("%d\n",i); 
    return 0;
}
 int main(){
    int adp=1+1+18+27;          //just power fun way to calculate
    printf("Hello world \n%d\n",adp); // hello world 
    conversion(); // hurray!😀 i called the function  
    return 0;
 }