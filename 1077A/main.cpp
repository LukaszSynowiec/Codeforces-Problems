#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	long long int comp1=0;
	long long int comp2=0;
	for(int i=0;i<x;i++)
	{
		long long int a,b,k;
		cin>>a>>b>>k;
		if(k%2!=0)
		{
			long long int y=k/2;	
			long long int z=k-y;
			comp1=a*z;
			comp2=b*y;
			cout<<comp1-comp2<<endl;
		}
		else
		{
			comp1=a*(k/2);
			comp2=b*(k/2);
			cout<<comp1-comp2<<endl;
		}


	}
	return 0;
}

