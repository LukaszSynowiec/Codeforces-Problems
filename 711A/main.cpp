#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x;
	bool isSeat=false;
	cin>>x;
	std::vector<string> vec;
	for(int i=0;i<x;i++)
	{
		string s;
		cin>>s;
		if(s[0]=='O'&&s[1]=='O'&&!isSeat)
		{
			isSeat=true;
			string y="++";
			y+=s[2];
			y+=s[3];
			y+=s[4];
			vec.push_back(y);
		}
		else if(s[3]=='O'&&s[4]=='O'&&!isSeat)
		{
			isSeat=true;
			string y="";
			y+=s[0];
			y+=s[1];
			y+=s[2];
			y+="++";
			vec.push_back(y);
		}
		else
		{
			vec.push_back(s);
		}
	}
	if(isSeat)
	{
		cout<<"YES"<<endl;
		for(string x:vec)
			cout<<x<<endl;
	}
	else
	{
		cout<<"NO";
	}

	return 0;
}

