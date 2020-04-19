#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int tab[x];
	for(int i=0;i<x;i++)
	{
		cin>>tab[i];
	}
	int max=tab[0];
	for(int i=1;i<x;i++)
	{
		if(tab[i]>max)
			max=tab[i];
	}
	int count=0;
	for(int i=0;i<x;i++)
	{
		if(tab[i]<max)
			count+=max-tab[i];
	}
	cout<<count;
	return 0;
}

