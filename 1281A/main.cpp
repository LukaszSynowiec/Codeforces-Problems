#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x;
	vector<string> v;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		string s;
		cin>>s;
		if(s.back()=='o')
		{
			v.push_back("FILIPINO");
		}
		if(s.back()=='u')
		{
			v.push_back("JAPANESE");
		}
		if(s.back()=='a')
		{
			v.push_back("KOREAN");
		}
	}

	for (string it:v)
		cout<<it<<endl;
	return 0;
}

