#include<iostream>

using namespace std;


int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		string s;
		cin>>s;
		int len=s.size();
		if(len<=10)
			cout<<s<<endl;
		else
		{
			int y=len-2;
			cout<<s[0]<<y<<s[len-1]<<endl;
		}

	}
	return 0;
}
