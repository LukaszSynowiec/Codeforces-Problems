#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int num;
		cin>>num;
		if(num%2==0)
			cout<<num/2<<endl;
		else
			cout<<(int)num/2<<endl;
	}
	return 0;
}

