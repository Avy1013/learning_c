#include <stdio.h>
/*topics to cover 
¥ Logical operators- &&(and),||(or),!(not)
¥ The usage of else if instead of bunches of ifs and nested ifs
¥ conditional operator or ternary operator should be there
The question is who to give salary and calculate thier benifits over thier base salary of 50k
CONDITIONS:
if he or she married 10k more
if he or she claims to be anyother gender(o) no salary
then if she is female she gets 5K less
then if she has a child she gets more 15k
if he his age is more than 30 and her age is more than 28 gets another 10k
if he is paying child support then 10K cash
*/

int main(){
    int base=50000,age,total,child=0;
    char gen,marry;
    printf("tell me you age ,gender(M,F,O),married(yes or not),child(0 or more: ");
    scanf("%d %d %c %c ", &age, &child, &gen, &marry);
    printf("%d%d%c%c",age,child,marry,gen);
    if (gen=='M'){
        if (marry=='y'&&age>30)
        {
           total=base+20000;
        }
        else if (marry=='y'||age>30)
        {
            total=base+10000;
        }
        else
            total=base;
        
    }
    else if (gen=='F')
    {
        base=base-5000;
         if (marry=='y'&&age>28)
        {
           total=base+20000;
        }
        else if (marry=='y'||age>28)
        {
            total=base+10000;
        }
        else
            total=base;
        child>0? total=base+15000 : total==base;

    }
    else
        total=base-base;
        
    printf("\nyou salary is: %d\n",total);
}