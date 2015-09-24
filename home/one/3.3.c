# include <stdio.h>
# include <windows.h>
#include<math.h>

main()
{
		float I;
		int k;
		int num;
		int max;

		printf("please input an int\n");
		scanf("%d",&max);
		while(max !=EOF)
		{
				//3.1
				float I_0=log(11.0/10.0);
				for (k=1;k<=max;k++)
				{
						I=1.0/k-10*I_0;
						I_0=I;
						if (k==max)
						{
								printf("3.1-I%d=%f\n",k,I_0); 
						}
				}

				//3.2
				float I_40=21.0/(220.0*41.0);
				for (k=40;k>max;k--)
				{
						num=k-1;
						I=(1.0/10.0)*(1.0/k-I_40);
						I_40=I;
						if (k-1==max)
						{
								printf("3.2-I%d=%f\n",num,I_40); 
						}
				}

				printf("please input an int\n");
				scanf("%d",&max);
		}
}
