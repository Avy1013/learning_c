#include <stdio.h>

long int revnum(long int num){
    
    long int rev=0; 
    long int rem=0;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num /= 10;
    }
    
    return rev;
}

