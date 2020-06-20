#include <iostream>
using namespace std;
int main()
{
	int x;

	cin>>x;
	int tab[x];
	float sum=0;
	for(int i=0;i<x;i++)
	{	
		cin>>tab[i];	
	}
	for(int i=0;i<x;i++)
	{	
		sum+=tab[i]/100.0f;	
	}
	float res = (sum/x)*100.0f;
	cout<<res;
	
	return 0;
}

