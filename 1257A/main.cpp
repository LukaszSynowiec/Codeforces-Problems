#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int students,swaps,a,b;
		cin>>students>>swaps>>a>>b;
		if(abs(a-b)==students-1)
		{
			cout<<abs(a-b)<<endl;
			continue;
		}
		if(swaps==0)
		{
			cout<<abs(a-b)<<endl;
			continue;
		}
		for(int i=0;i<swaps;i++)
		{
			if(a<b)
			{
				if(a>=2)	
					a--;
				else if(b<students)
					b++;
			}
			else if(a>b)
			{
				if(a<students)
					a++;
				else if(b>=2)
					b--;
			}
		}
		cout<<abs(a-b)<<endl;
	}
	return 0;
}

