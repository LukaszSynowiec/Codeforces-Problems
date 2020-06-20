#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	bool isNum=false;
	for(int i=0;i<x;i++)
	{
		int size;
		cin>>size;
		string s;
		cin>>s;
		if(size<=10)
		{
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0;i<size;i++)
		{
			if(s[i]=='8'&&i+11<=size&&!isNum)
			{
				cout<<"YES"<<endl;
				isNum=true;
			}
		}
		if(!isNum)
			cout<<"NO"<<endl;
		isNum=false;
	}
	return 0;
}

