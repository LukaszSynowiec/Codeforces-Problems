#include <iostream>
#include <utility>
#include <vector>
using namespace std;
bool isInPair(pair<int,int> &x,int y)
{
	if(y<=x.second&&y>=x.first)
		return true;
	return false;
}
int main()
{
	int x;
	cin>>x;
	std::vector<pair<int,int>> v;
	for(int i=0;i<x;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	int marked;
	cin>>marked;
		for(int i=0;i<x;i++)
		{
			if(isInPair(v[i],marked))
				cout<<x-i<<endl;
		}
	return 0;
}

