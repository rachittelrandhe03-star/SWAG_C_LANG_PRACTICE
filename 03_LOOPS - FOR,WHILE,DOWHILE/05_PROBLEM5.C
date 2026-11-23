	//5.  Print the Fibonacci series up to N terms.us
	#include<stdio.h>
	int main()
	{
		int n,t1=0,t2=1,i,nextterm;
		printf("please enter how many number os the fibonacci series you want :");
		scanf("%d",&n);
		printf("%d, %d",t1,t2);
		for(i=0;i<=n;i++)
		{
			nextterm =t1 + t2;
			t1 =t2;
			t2 = nextterm;
			printf(", ");
			printf("%d",nextterm);
		}
	}