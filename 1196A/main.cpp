#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int64_t  tab[x];
	for(int i=0;i<x;i++)
	{
		int64_t  a,b,c;
		cin>>a>>b>>c;
		int64_t  y=((a+b+c)/2);
		tab[i]=y;
	}
	for(int64_t  a:tab)
	{
		cout<<a<<endl;
	}
	return 0;
}



