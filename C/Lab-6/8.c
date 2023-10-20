#include <stdio.h>

int main ()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2); 
    int diff = n1 - n2;

    if(n1<n2)
    {
        for(int i = 1; i<=n2; i++)
        {
            n1++;
            if(n1==n2)
            break;
        }
    }
    else
    {
        for(int i = 1; i<=n1; i++)
        {
            n2++;
            if(n2==n1)
            break;
        }
    }

    printf("n1 = %d\n n2 = %d\n difference is %d\n", n1, n2, diff);
}