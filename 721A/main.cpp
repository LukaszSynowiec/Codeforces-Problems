#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x;
	cin>>x;
	string s;
	cin>>s;
	std::vector<int> sizeGroup;
	int groups=0;
	int counter=0;
	for(int i=0;i<x;i++)
	{
		if(s[i]=='B')
		{
			counter++;
		}
		if((s[i]=='W'||i+1==x)&&counter>0)
		{
			groups++;
			sizeGroup.push_back(counter);
			counter=0;
		}

	}
	cout<<groups<<endl;
	for(int y:sizeGroup)
	{
		cout<<y<<" ";
	}
	return 0;
}

