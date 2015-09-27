#include<stdio.h>
#define N 10

int main()
{
		int arcs[N][N];
		int astar[N][N];
		int i,j;
		int n;
		while(scanf("%d",&n)!=EOF && n)
		{
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

		}
}
