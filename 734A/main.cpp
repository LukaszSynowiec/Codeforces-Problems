#include <iostream>
using namespace std;
int main()
{
	int x;
	int a=0;
	int d=0;
	cin>>x;
	string s;
	cin>>s;
	for(int i=0;i<x;i++)
	{
		if(s[i]=='A')
			a++;
		else
			d++;
	}
	if(a>d)
		cout<<"Anton";
	else if(a<d)
		cout<<"Danik";
	else
		cout<<"Friendship";
	return 0;
}

