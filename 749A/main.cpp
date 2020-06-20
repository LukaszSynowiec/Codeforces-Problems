#include <iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;

	if(n%2==0)
	{
		int numbers=n/2;
		cout<<numbers<<endl;
		for(int i=0;i<numbers;i++)
		{
			cout<<"2 ";
		}
	}
	else
	{
		int numbers=(int)n/2-1;
		cout<<numbers+1<<endl;
		for(int i=0;i<numbers;i++)
		{
			cout<<"2 ";
		}
		cout<<"3";

		
	}
	return 0;
}

