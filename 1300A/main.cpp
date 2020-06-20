#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int sum=0;
		int size;
		cin>>size;
		int tab[size];
		for(int i=0;i<size;i++)
		{
			cin>>tab[i];
		}
		int steps=0;
		for(int i=0;i<size;i++)
		{
			if(tab[i]==0)
			{
				tab[i]++;
				steps++;
			}
			
		}
		for(int i=0;i<size;i++)
		{
			sum+=tab[i];	
		}
		if(sum==0)
		{
			for(int i=0;i<size;i++)
			{
				if(tab[i]>0)
				{
					tab[i]++;
					steps++;
					break;
				}
		
			}
		}
		cout<<steps<<endl;
	}
			

		
		
	
	return 0;
}

