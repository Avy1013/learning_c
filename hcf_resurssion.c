#include <stdio.h>
int hcf(int, int);
int recursion_hcf(int, int, int);
int main()
{
    int number1, number2;
    printf("Enter no.1: ");
    scanf("%d", &number1);
    printf("\nEnter no.2: ");
    scanf("%d", &number2);
    // int max = hcf(number1, number2);
    // printf("\nNUMBER: %d", max);
    int larger = (number1 < number2) ? number1 : number2;
    int max2 = recursion_hcf(number1, number2, larger);
    printf("\nNUMBER: %d", max2);
    return 0;
}
int recursion_hcf(int a, int b, int i)
{

    if (a % i == 0 && b % i == 0)
    {
        return i;
    }
    else
    {
        return (recursion_hcf(a, b, i - 1));
    }
}

int hcf(int a, int b)
{
    for (int i = 1; i < (a > b ? a : b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}