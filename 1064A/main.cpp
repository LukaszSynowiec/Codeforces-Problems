#include <iostream>
using namespace std;
int lowest(int a,int b,int c)
{
	int min=a;
	if(b<min)
		min=b;
	if(c<min)
		min=c;

	if(min==a)
		return 1;
	if(min==b)
		return 2;
	if(min==c)
		return 3;
}
int main()
{
	int a,b,c;
	int count=0;
	cin>>a>>b>>c;
	while(a+b<=c||a+c<=b||b+c<=a)
	{
		if(lowest(a,b,c)==1)
			a++;
		else if(lowest(a,b,c)==2)
			b++;
		else if(lowest(a,b,c)==3)
			c++;
		count++;
	}
	cout<<count;
	return 0;
}

