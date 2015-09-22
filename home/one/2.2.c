# include <stdio.h>
# include <windows.h>
#include<math.h>

main()
{
		float n;
		float x=1.0/3.0;
		double ln2_real=0.69314718055995;
		double ln2=0;
		double ln;
		double abs_ln;

		for (n=1.0;n<=2000000;n++)
		{
				ln = 2*pow(x,2*n-1)*(1/(2*n-1));
				ln2 += ln;
				printf("%f,%f,%f\n",n,ln2,ln); 
				if(fabs(ln2-ln2_real)<1e-6)
				{
						printf("get,%f,%f\n",n,ln2,ln); 
						break;
				}
		}
	  system("pause");
}
