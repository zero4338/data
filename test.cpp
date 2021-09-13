#include<iostream>
#include<cstdio>
#include<random>
using namespace std;
mt19937 rnd(0);
int Rand(int l,int r){return rnd()%(r-l+1)+l;}
int n=3e5,q=3e5;
int main()
{
	printf("%d %d\n",n,q);
	for(int i=2;i<=n;i++)
		printf("%d %d\n",Rand(max(1,i-Rand(1,5)),i-1),i);
	for(int i=1;i<=q;i++)
	{
		int opt=Rand(1,2);
		if(opt==1)
		{
			if(rnd()%20)
			{
				int x=Rand(1,10),y=Rand(0,x-1);
				printf("1 %d %d %d %d\n",Rand(1,n/Rand(1000,2000)),x,y,Rand(1,1e3));
			}
			else
			{
				int x=Rand(n/10,n),y=Rand(0,x-1);
				printf("1 %d %d %d %d\n",Rand(1,n/Rand(1000,2000)),x,y,Rand(1,1e3));
			}
		}
		else printf("2 %d\n",Rand(1,n));
	}
	return 0;
}