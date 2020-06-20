#include<iostream>

using namespace std;


int main()
{
	int n,k;
	cin>>n>>k;
	int tab[n];
	for(int i=0;i<n;i++)
		cin>>tab[i];
	int score=tab[k-1];
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(tab[i]>0&&tab[i]>=score)
			count++;
	}
	cout<<count;
	return 0;
}
