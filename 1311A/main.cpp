#include <iostream>
#include <vector>
using namespace std;
int main()
{
	std::vector<int> results;
	int tests;
	cin>>tests;
	for(int i=0;i<tests;i++)
	{
		int moves=0;
		int a,b;
		cin>>a>>b;
		
		
		if(a<b)
		{
			int x=b-a;
			if(x%2!=0)
			{

				a+=x;
				moves++;
			}
			else
			{
				a+=x+2;
				moves++;
				a-=2;
				moves++;
			}
			//	moves+=2;

		}
		else if(a>b)
		{
			int x=a-b;
			if(x%2==0)
			{
				a-=x;
				moves++;
			}
			else
			{
				a-=x+2;
				moves++;
				a+=2;
				moves++;
			}

		}
		if(a==b)
			results.push_back(moves);
	}
	for (int it:results)
		cout<<it<<endl;
	return 0;
}