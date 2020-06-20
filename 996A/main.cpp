#include <iostream>
using namespace std;
int main()
{
	int x;
	int i=0;
	cin>>x;
	while(x>0)
	{
		if(x%100==0)
		{
			i++;
			x-=100;
			continue;
		}
		if(x%20==0)
		{
			i++;
			x-=20;
			continue;
		}if(x%10==0)
		{
		i++;
		x-=10;
		continue;
		}if(x%5==0)
	{
		i++;
		x-=5;
		continue;
		}if(x>=0)
	{
		i++;
		x-=1;
		}
	}
		cout<<i;
	return 0;
}

