#include <stdio.h>
#include <math.h>

int main ()
{ 
    int num, max;
    for(int i =1; i<=5;i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        if(i==1)
          max = num;
        else if(i>1)
          {
            if(num>max)
              max = num;
         }
    }

    printf("Maximum Number is %d\n", max);
}
