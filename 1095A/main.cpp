#include <iostream>
#include <string>
using namespace std;
int main()
{
	int len;
	cin>>len;
	string s;
	cin>>s;

	int sum=0;
	string res="";
	for(int i=1;i<=len;i++)
	{
		if(sum+i<=len)
		{
			sum+=i;
			res+=s[0];
			s = s.substr(i);
		}
	}
	cout<<res;
	return 0;
}

