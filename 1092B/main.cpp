#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int tab[x];
	int count=0;
	for(int i=0;i<x;i++)
	{
		cin>>tab[i];
	}
	sort(tab, tab+x);
	for(int i=0;i<x;i+=2)
	{
		if(tab[i]<tab[i+1])
			count+=tab[i+1]-tab[i];
		else if(tab[i]>tab[i+1])
			count+=tab[i]-tab[i+1];
	}
	cout<<count;
	return 0;
}

