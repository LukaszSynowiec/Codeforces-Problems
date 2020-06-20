#include<iostream>

using namespace std;

int main()
{
    int x;
	int r=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2)
			r++;
	}
	cout<<r<<endl;

	return 0;
}
