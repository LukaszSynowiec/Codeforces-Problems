#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	long int tab[x];
	for(int i=0;i<x;i++)
	{
		cin>>tab[i];
		if(tab[i]%2==0)
			tab[i]--;
	}
	for(int i=0;i<x;i++)
	{
		cout<<tab[i]<<" ";
	}
	
	return 0;
}

