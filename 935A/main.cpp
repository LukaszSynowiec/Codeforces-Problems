#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int ways=0;
	//i tema leader
	for(int i=1;i<x;i++)
	{ 

		if(x%i==0)
			ways++;
	}

	cout<<ways;
	return 0;
}

