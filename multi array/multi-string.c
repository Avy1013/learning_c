#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void kl(char multi[][20]){
   
    for (int i = 0; i < 5; i++)
    {
        printf("name: %s\n",multi[i]);
    } 
}
void pointer_array(char *multi2[]) {
    char *temp;
    temp = multi2[2];
    multi2[2] = multi2[3];
    multi2[3] = temp;
}


int main(){ 
    static char multi[5][20] = {"vivek","vaibhav","avy","prakhar","aakoo"};
    char *multi2[5]= {"vivek","vaibhav","avy","prakhar","aakoo"};
    for (size_t i = 0; i < 5; i++)
    {
        printf("name: %s\n", multi[i]);
    }
    // kl(multi);
    pointer_array(multi2);
    for (size_t i = 0; i < 5; i++)
    {
        printf("name: %s\n", multi2[i]);
    }
    return 0;
}