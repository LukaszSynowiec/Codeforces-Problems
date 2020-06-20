#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
	if(a.second == b.second)
	{
		 return (a.first < b.first); 
	}
    return (a.second > b.second); 
} 

int main()
{
	int x;
	cin>>x;
	vector<pair<int,int>> s;
	for(int i=0;i<x;i++)
	{
		int a,b,c,d;
		int sum=0;
		int id=i+1;
		cin>>a>>b>>c>>d;
		sum+=a;
		sum+=b;
		sum+=c;
		sum+=d;
		s.push_back(make_pair(id,sum));
		
	}
	sort(s.begin(), s.end(),sortbysec);
	for(int i=1;i<=x;i++)
	{
		if(s[i-1].first==1)
			cout<<i;
	}
	return 0;
}

