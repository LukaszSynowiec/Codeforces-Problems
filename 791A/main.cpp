#include <iostream>
using namespace std;
int main()
{
	int a,b,i=0;
	cin>>a>>b;
	do
	{
		a*=3;
		b*=2;
		i++;
		}while(a<=b);
		cout<<i;
	return 0;
}

