# include <stdio.h>
# include <windows.h>
#include<math.h>

main()
{
		double I;
		int k;
		int num;
		int max;

		printf("please input an int 0=<num<40 \n");
		scanf("%d",&max);
		while(max !=EOF)
		{
				double I_40=21.0/(220.0*41.0);
				for (k=40;k>max;k--)
				{
						num=k-1;
						I=(1.0/10.0)*(1.0/k-I_40);
						I_40=I;
						//printf("I%d=,%f\n",num,I_40); 
				}
				printf("I%d=,%f\n",num,I_40); 
				//system("pause");
				printf("please input an int\n");
				scanf("%d",&max);
		}	
}
