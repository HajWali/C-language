#include <stdio.h>

int main ()
{
    int num = 2;
    int sum =0;
    int x;
    printf("Enter value of var x: ");
    scanf("%d", &x);

    for(int i =2;i<=10; i+=2)
    {
       
       sum += num*x;
       num +=2;
    }

    printf("Sum is: %d\n", sum);
}