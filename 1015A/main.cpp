#include <iostream>
#include <vector>
struct segment
{
	int l,r;
	bool isInRange(int x)
	{
		if(x<=r&&x>=l)
			return true;
		return false;
	}
};
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	segment t[n];
	int points[m];
	std::vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>t[i].l>>t[i].r;
	}
	for(int i=1;i<=m;i++)
	{
		points[i-1]=i;
	}
	bool range=false;
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
			{
				
				if(t[j].isInRange(points[i]))
					range=true;
				

			}
			if(!range)
			{
				v.push_back(points[i]);
			}
			range=false;
	}
	cout<<v.size()<<endl;
	for(int y:v)
		cout<<y<<" ";
	return 0;
}

