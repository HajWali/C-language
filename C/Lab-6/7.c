#include <stdio.h>

int main ()
{
    int num;
    int check = 0;
    
    for(int i =1; i<=5; i++)
    {
        printf("Enter the %d Number: ", i);
        scanf("%d", &num);
        if(i==1 && num == 1)
          {
            printf("Enter 1st Number again");
            scanf("%d", &num);
            check++;
          }
        if(i==2 && num == 2)
          {
            printf("Enter 2nd Number again");
            scanf("%d", &num);
            check++;
          }
        if(i==3 && num == 3)
          {
            printf("Enter 3rd Number again");
            scanf("%d", &num);
            check++;
          }
        if(i==4 && num == 4)
          {
            printf("Enter 4th Number again");
            scanf("%d", &num);
            check++;
          }
        if(i==5 && num == 5)
          {
            printf("Enter 5th Number again");
            scanf("%d", &num);
            check++;
          }
    }

    printf("%d times numbers matched their iteration\n", check);
}