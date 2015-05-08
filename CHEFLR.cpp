#include<iostream>
#include<cstdio>
#define ull unsigned long long int
using namespace std;
int main()
{
	ull test,number,height,i,mod;
	mod=1000000007;
	char str[100050];
	scanf("%llu",&test);
	while(test--)
	{
		scanf("%s",str);
		number=1;
		height=0;
		i=0;
		while(str[i]!='\0')
		{
			if(height%2==0)
			{
				if(str[i]=='l')
				number=((number%mod)*(2%mod)) %mod;
				else if(str[i]=='r')
				number=((((number%mod)*(2%mod))%mod) + (2%mod)) %mod;
			}
			else
			{
				if(str[i]=='l')
				number=((((number%mod)*(2%mod)) %mod)- (1%mod))%mod;
				else if(str[i]=='r')
				number=((((number%mod)*(2%mod))%mod) + (1%mod)) %mod;
			}
			i++;
			height+=1;
		}
		printf("%llu\n", (number%mod));
	}
	return 0;
}
