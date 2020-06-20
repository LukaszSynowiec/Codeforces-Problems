#include <iostream>
#include <string>

using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int count=0;
		string res="";
		string s;
		cin>>s;
		int size=s.length();
		int first=s.find_first_of('1');
		int last=s.find_last_of('1');
		for(int i=0;i<size;i++)
		{
			if(s[i]=='1')
				res+=s[i];
			else if(i<first||i>last)
				res+=s[i];
			else
				count++;
			
		}
		cout<<count<<endl;
	}
	return 0;
}

