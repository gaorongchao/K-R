# include <stdio.h>
# include <windows.h>
#include<math.h>

main()
{
		float n;
		double ln2_real=0.69314718055995;
		double ln2=0;
		double ln;
		double abs_ln;

		for (n=1.0;n<=2000000;n++)
		{
				ln = pow(-1.0,n-1.0)*(1/n);
				//abs_ln = fabs(ln);
				ln2 += ln;
				printf("%f,%f,%f\n",n,abs_ln,ln2); 
				if(fabs(ln2-ln2_real)<1e-6)
				{
						printf("get,%f,%f\n",n,ln); 
						break;
				}
		}
	  system("pause");
}
