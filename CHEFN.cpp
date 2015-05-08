#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int test,i,j,k,ans;
	char str[100050],c1,c2;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s",str);
		i=0,ans=0;
		while(str[i]!='\0')
		{
			if(str[i]==str[i+1])
			ans+=1;
			
			i+=2;
		}
		printf("%d\n",ans);
		
	}
	return 0;
}
