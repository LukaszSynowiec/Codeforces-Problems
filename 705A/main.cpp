#include <iostream>
using namespace std;
int main()
{
	string h1="I hate it";
	string h2="I hate that";
	string l1="I love it";
	string l2="I love that";
	int x;
	cin>>x;
	string tab[x];
	for(int i=1;i<=x;i++)
	{
		if(i==x&&i%2==0)
		tab[i-1]=l1;
		else if(i==x&&i%2!=0)
		tab[i-1]=h1;
		if(x==1)
		{
		tab[i-1]=h1;
		break;
		}else
		{
			tab[0]=h2;
			}
		if(i%2==0&&i<x)
			tab[i-1]=l2;
			else if(i%2!=0&&i<x)
			tab[i-1]=h2;
		
	}
	for(int i=0;i<x;i++)
	{
		
		cout<<tab[i]<<" ";
		
	}
	return 0;
}

