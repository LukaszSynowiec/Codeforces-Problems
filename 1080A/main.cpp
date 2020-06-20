#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int r=ceil((2.0f*n)/k);
	int g=ceil((5.0f*n)/k);
	int b=ceil((8.0f*n)/k);
	cout<<r+g+b;
	return 0;
}

