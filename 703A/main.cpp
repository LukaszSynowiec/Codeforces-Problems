#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int m=0;
	int c=0;

	for(int i=0;i<x;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
			m++;
		else if(a<b)
			c++;
		else
			{c++;
				m++;
			}
	}

	if(m>c)
			cout<<"Mishka";
		else if(m<c) 
			cout<<"Chris";
		else
			cout<<"Friendship is magic!^^";
	
	return 0;
}

