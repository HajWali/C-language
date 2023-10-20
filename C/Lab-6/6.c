#include <stdio.h>

int main ()
{
    int n1, n2, n3, n4, n5, n6;
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6);

    int sum = 0;
    int check = 0; 

    for(int i = 1; i<=6; i++)
    {
        sum =  n1 + n2 + n3 + n4 + n5 + n6;
        if(n4 > (n1 + n2 + n3))
          {
            i = 1;
            sum = 0;
            check++;
          }
    }


    printf("Sum is %d \n", sum);
    check == 1?printf("Loop reapeted"):printf("Loop not reapeted");

}