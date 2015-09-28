#include<stdio.h>
#include<time.h>
#define N 20

//抄过来的 http://blog.csdn.net/abcjennifer/article/details/6693612
int getA(int arcs[N][N],int n)//按第一行展开计算|A|
{
		if(n==1)
		{
				return arcs[0][0];
		}
		int ans = 0;
		int temp[N][N];
		int i,j,k;
		for(i=0;i<n;i++)
		{
				for(j=0;j<n-1;j++)
				{
						for(k=0;k<n-1;k++)
						{
								temp[j][k] = arcs[j+1][(k>=i)?k+1:k];

						}
				}
				int t = getA(temp,n-1);
				if(i%2==0)
				{
						ans += arcs[0][i]*t;
				}
				else
				{
						ans -=  arcs[0][i]*t;
				}
		}
		return ans;
}
void getAStart(int arcs[N][N],int n,int ans[N][N])//计算每一行每一列的每个元素所对应的余子式，组成A*
{
		if(n==1)
		{
				ans[0][0] = 1;
				return;
		}
		int i,j,k,t;
		int temp[N][N];
		for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++)
				{
						for(k=0;k<n-1;k++)
						{
								for(t=0;t<n-1;t++)
								{
										temp[k][t] = arcs[k>=i?k+1:k][t>=j?t+1:t];
								}
						}


						ans[j][i]  =  getA(temp,n-1);
						if((i+j)%2 == 1)
						{
								ans[j][i] = - ans[j][i];
						}
				}
		}
}

int main()
{
		int arcs[N][N];
		int astar[N][N];
		int i,j;
		int n;
		clock_t start,finish;
		double duration;

		while(scanf("%d",&n)!=EOF && n)
		{
				start=clock();
				for(i=0;i<n;i++)
				{
						for(j=0;j<n;j++)
						{
								// scanf("%d",&arcs[i][j]);
								if (i>=j)
								{
										arcs[i][j]=(j+1)*(n-i);
								}
								else
								{
										arcs[i][j]=(i+1)*(n-j);
								}
						}
				}

				int a = getA(arcs,n);
				if(a==0)
				{
						printf("can not transform!\n");
				}
				else
				{
						getAStart(arcs,n,astar);
						for(i=0;i<n;i++)
						{
								for(j=0;j<n;j++)
								{
										printf("%.3lf ",(double)astar[i][j]/a);
								}
								printf("\n");
						}
				}
				printf("\n");
				finish=clock();
				duration=(double)(finish-start)/CLOCKS_PER_SEC;
				printf("time is %f seconds\n",duration);
		}

		return 0;
}

