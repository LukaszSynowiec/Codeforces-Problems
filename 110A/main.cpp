#include<iostream>
#include<string>

using namespace std;


int main()
{
	int count=0;
	string x;
	
	cin>>x;
	
	for(int i=0;i<(int)x.length();i++)
	{
		if(x[i]=='4' || x[i]=='7')
		count++;
	}
	string s=to_string(count);
	for(int i=0;i<(int)s.length();i++)
	{
		if(s[i]!='4' && s[i]!='7')
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
}
