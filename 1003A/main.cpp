#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
	int x;
	cin>>x;
	int tab[x];
	for(int i=0;i<x;i++)
	{
		cin>>tab[i];
	}
	unordered_map<int, int> count;
	for (int i=0; i<x; i++)        
    	count[tab[i]]++; 
    int max=0;
	for (auto &e:count)      
	{
		if(e.second>max)
    	{
    		max=e.second;
    	}	
	}        
    	

    cout<<max;
	return 0;
}

