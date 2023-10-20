#include <stdio.h>

int main ()
{
    int num = 10;
    printf("Enter rang: ");
    scanf("%d", &num);
    int sum = 0;
    int sumOdd = 0;
    int sumEven = 0;

    for(int i =1; i<=num; i++)
    {
        sum += i;
        if(i % 2 != 0)
        sumOdd += i;
        else
        sumEven += i;
    }
    printf("Sum of nmbr 1-50 is: %d\n Sum of odd nmbrs is: %d\n Sum of Even nmbrs is: %d\n", sum, sumOdd, sumEven);
}