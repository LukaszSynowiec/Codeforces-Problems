#include <iostream>
#include <algorithm>
#include <cmath>
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
	sort(tab,tab+x);
	if(x%2==0)
		cout<<tab[(x/2)-1];
	else
		cout<<tab[(int)ceil(x/2)];
	return 0;
}

