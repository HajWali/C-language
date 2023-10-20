#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int check = 0;
    int i;

    for(i =2; i<num; i++)
    {
        if(num % i == 0)
        {
            printf("%d is a Non-Prime number", num);
            check++;
            break;
        }
    }
    if(check == 0)
      printf("%d is a Prime Number", i);
}