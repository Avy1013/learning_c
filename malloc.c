#include<stdio.h>
#include<stdlib.h>

int main(){
    int max,i,*p;
    scanf("%d",&max);
    p=(int*)malloc(max*sizeof(int));
    for (size_t i = 0; i < max; i++)
    {
        p[i]=i*i;
        printf("%d %p\t",p[i],&p[i]);
    }
    return 0;
    
}