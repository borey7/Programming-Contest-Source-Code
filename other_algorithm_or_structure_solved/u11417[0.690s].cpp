//11417

#include<iostream>

using namespace std;
int GCD(int a, int b)
{
	while(b>0)
	{
		a = a%b;
		a ^= b;
		b ^= a;
		a ^= b;		
	}
	return a;
}

int main()
{
	int GCDKEEP[501][501];
	int result[501]= {0};
	
	for(int n=1;n<501;n++)
	{
		int G = 0;	
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)	{G += GCDKEEP[i][j]=GCD(i,j);}
		}
		result[n] = G;
	}
	//freopen("input/u11417.in","r",stdin);	
	//freopen("input/u11417[output].in","w",stdout);
	int N;
	while(1)
	{
		cin>>N;
		if(N==0)break;
		//int G=0;
		//for(int i=1;i<N;i++)for(int j=i+1;j<=N;j++)	{G+=GCDKEEP[i][j];}
		printf("%d\n",result[N]);
	}
	return 0;
}
