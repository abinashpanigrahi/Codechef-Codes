#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long int test,x,y,n,k,p,c,flag;
	scanf("%ld",&test);
	while(test--)
	{
		scanf("%ld %ld %ld %ld",&x,&y,&k,&n);
		y=x-y;
		flag=0;
		while(n--)
		{
			scanf("%ld %ld",&p,&c);
			if(p>=y && c<=k)
				flag=1;
		}
		if(flag==1)
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");
	}
	return 0;
}
