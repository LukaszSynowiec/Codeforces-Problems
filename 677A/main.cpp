#include <iostream>
using namespace std;
int main()
{
	int n,h,width;

	cin>>n>>h;
	int fr[n];
	for(int i=0;i<n;i++)
	{
		cin>>fr[i];
	}
	width=0;
	for(int i=0;i<n;i++)
	{
		if(fr[i]>h)
			width+=2;
		else
			width++;
	}
	cout<<width;
	return 0;
}

