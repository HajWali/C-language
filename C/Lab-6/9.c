#include <stdio.h>

int main ()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num); 
    int fact = 1;
    
    for(int i =1; i<=num; i++)
    {
        fact *= i;
    }
    printf("Factorial is: %d\n", fact);
}