#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	string s;
	cin>>s;
	int remove=0;
	for(int i=0;i<x;i++)
	{
		if(i+1<x&&i+2<x)
		{
			if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
			{
				remove++;
			}
		}

	}
	cout<<remove;
	return 0;
}

