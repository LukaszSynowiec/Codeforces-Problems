#include <iostream>
using namespace std;
int main()
{
	int x;
	bool is=false;
	cin>>x;
	int tab[x];
	for(int i=0;i<x;i++)
	{
		cin>>tab[i];
	}
	for(int i=0;i<x;i++)
	{
		if(tab[i]==1)
		{
				is=true;
		}
		
	}
	if (is)
	cout<<"HARD";
	else
	cout<<"EASY";
		return 0;
}

