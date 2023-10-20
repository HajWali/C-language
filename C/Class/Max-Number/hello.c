#include <stdio.h>

int maxNum()
	{
		int max;
		for(int i=1; i<=5; i++)
        {
	    int N;
		printf("Enter Number: ");
		scanf("%d", &N);
		if(i==1)
		max = N;
		else if(i>1)
	       {
			if(N>max)
		      {
				max = N;
		      }
	       }
		
    	}
    	 return max;
	
	}
	

int main()
{
	int n;
	n = maxNum();
	printf("Maximum Number is: %d\n", n);
}