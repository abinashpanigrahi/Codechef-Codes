#include<iostream>
#include<cstdio>
#include<algorithm>
#include <functional> 
using namespace std;
int main()
{
	int n,test,i,j,sum;
	scanf("%d",&test);
	while(test--)
	{
		sum=0;
		scanf("%d",&n);
		int arr[n],sorted[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			sorted[i]=arr[i];
		}
		sort(sorted,sorted+n,std::greater<int>());
		//for(i=0;i<n;i++)
		//printf("%d  ",sorted[i]);
		
		//printf("\n");
		for(i=0;i<n;i+=4)
		{
			//printf("%d %d %d\n",i,sorted[i],sorted[i+1]);
			sum=sum+sorted[i]+sorted[i+1];
			//printf("%d %d %d %d\n",i,sorted[i],sorted[i+1],sum);
			//i=i+3;
			//if(i>n) break;
		}
		
		printf("%d\n",sum);
	}
	return 0;
}
