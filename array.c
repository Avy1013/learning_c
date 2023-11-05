#include<stdio.h>
int display1(int array[]){
    int *iop = array;
    for (int i = 0; i < 6; i++)
    {
       printf("%d\n",*iop); // address manipulation through pointer // pointer addition
       printf("%p\n",iop); // printing the address shows the increment
       iop++;
    }
    return 0;
}

int main(){
    int avg,sum=0,count=6;
    int aray[]={1,2,3,4,5,6};
    printf("hello\n");
    display1(aray);
    for (size_t i = 0; i < count; i++)
    {
        printf("%d",aray[i]); // normally printing it
    }

}
