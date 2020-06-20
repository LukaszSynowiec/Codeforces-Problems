#include <bits/stdc++.h>

using namespace std;

int main()
{
	uint32_t n,q;


	cin>>n>>q;
	for(int i=0;i<q;i++)
	{
		if(n%10!=0) 
		{
			n--;
		}
		else 
			{
				n/=10;
			}
	}
	
	cout<<n;
	return 0;
}