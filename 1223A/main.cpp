#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int n;
		int count=0;
		cin>>n;
		if(n==2)
		{
			a.push_back(2);
			continue;
		}
		while(n%2!=0)
		{
			count++;
			n++;
		}
		if(n%2==0)
			a.push_back(count);

	}
	for(int it:a)
		cout<<it<<endl;

	return 0;
}

