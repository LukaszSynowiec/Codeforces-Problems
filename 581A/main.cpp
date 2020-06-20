#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int x=a>b?b:a;
	a-=x;
	b-=x;
	int y=a<b?(int)b/2:(int)a/2;
	cout<<x <<" "<<y;
	return 0;
}

