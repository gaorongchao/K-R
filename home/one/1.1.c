# include <stdio.h>
# include <windows.h>

main()
{
	float c1;
	int i;
	int max;
	double err;
	int count=0;
	
	scanf("%d",&max);

	for (i=1;i<=max;i++)
	{
			count=0;
			c1=i;
			while(c1 > 1)
			{
					c1  = (c1+1)/2;
					err = c1-1;
					count++;
			}
			printf("%d,%f,%f\n",count,c1,err); 
			c1++;
	}
	system("pause");
}
