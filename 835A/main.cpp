#include <iostream>
using namespace std;
int main()
{
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int f=(2*t1)+(s*v1);

	int sec=(2*t2)+(s*v2);
	if(f<sec)
		cout<<"First";
	else if (f>sec)
		cout<<"Second";
	else
		cout<<"Friendship";
	return 0;
}

