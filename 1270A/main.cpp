#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortVectors(std::vector<int> &a,std::vector<int> &b)
{
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
}
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int cards,firstCards,secondCards;
		cin>>cards>>firstCards>>secondCards;
		std::vector<int> first;
		std::vector<int> second;
		for(int j=0;j<firstCards;j++)
		{
			int temp;
			cin>>temp;
			first.push_back(temp);
		}
		for(int j=0;j<secondCards;j++)
		{
			int temp;
			cin>>temp;
			second.push_back(temp);
		}
		sortVectors(first,second);

		while(true)
		{
			if(first.back()>second.back())
			{
				first.push_back(second.back());
				second.pop_back();
				secondCards--;
				firstCards++;
				

			}else if(first.back()<second.back())
			{
				second.push_back(first.back());
				first.pop_back();
				firstCards--;
				secondCards++;
			}
			//cout<<firstCards<<endl;
			//cout<<secondCards<<endl;
			sortVectors(first,second);
			if(firstCards==0||secondCards==0)
				break;
		}
		if(firstCards==0)
			cout<<"NO"<<endl;
		else if(secondCards==0)
			cout<<"YES"<<endl;	
	}
	return 0;
}

