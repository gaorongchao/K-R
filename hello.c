#include <stdio.h>
/* vim 运行方式 : ":!gcc hello.c"
 * 然后会生成.exe的文件
 * 然后生成的.exe文件也可以直接用":!a.exe" 运行程序*/


main()
{
	float fahr,celsius;
	int lower,upper,step;

	lower = 0;
	upper = 300;
	step  = 20;
	fahr  = lower;
	printf("Tem\n");
	while(fahr<=upper)
	{
		celsius = 5.0*(fahr-32.0)/9.0;
		printf("%3.0f\t%6.1f\n",fahr,celsius);
		fahr=fahr+step;
	}
}
