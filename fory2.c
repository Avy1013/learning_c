#include <stdio.h>
// in this program try removing the break and u will realise that it does not follow the rule of restarting from 19
// try the program without break
int main() {
    int a, b, j, k =0, c = 1;
    a = 1;
    b = 10;

    for (int i = 0; i < 10; i += 2) {
        for (j = 0; j < 10; j++,a++,c++) // a way of initialization
        {
            k = a + b; 
            if (a==10)
            {
               break; // usage of break and 
            }
            printf("%d %d\n", k, c);
                }
                a=0;
            }
        
         return 0;
    }

   
