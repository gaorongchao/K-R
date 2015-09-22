# include <stdio.h>
# include <windows.h>

main()
{
	float c1;
	double err;
	int count=0;
	
	scanf("%f",&c1);
	while(c1 !=EOF)
	{
			count=0;
			while(c1 > 1)
			{
					c1  = (c1+1)/2;
					err = c1-1;
					count++;
			}
			printf("%d,%f,%f\n",count,c1,err); 
			scanf("%f",&c1);
	}
	//system("pause");
}
