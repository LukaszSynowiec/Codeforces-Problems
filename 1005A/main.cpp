#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int tab[x];
	std::vector<int> v;
	int stairwaysCount=0;
	for(int i=0;i<x;i++)
	{
		cin>>tab[i];
		if(tab[i]==1)
			stairwaysCount++;
	}
	if(x==1)
	{
		cout<<"1"<<endl;
		cout<<"1"<<endl;
	}
	else{
			for(int i=1;i<x;i++)
			{
				if(tab[i]==1)
					v.push_back(tab[i-1]);
				if(i==x-1)
					v.push_back(tab[i]);


			}
			cout<<stairwaysCount<<endl;
			for(int y:v)
			{
				cout<<y<<" ";
			}
}
	return 0;
}

