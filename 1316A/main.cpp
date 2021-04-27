#include <iostream>
#include <vector>

using namespace std;
int SUM_OTHER(int tab[],int size)
{
	
	int sum=0;
	for(int i=1;i<size;i++)
	{
		sum+=tab[i];
	}
	return sum;
}

int main()
{
	int x;
	cin>>x;
	std::vector<int> v;
	for(int i=0;i<x;i++)
	{
		int students,maxScore;
		cin>>students>>maxScore;
		int tab[students];
		for(int i=0;i<students;i++)
		{
			cin>>tab[i];
		}
		if(students>1)
		{
			int sumOther=SUM_OTHER(tab,students);
			if(sumOther>0)
			{
				if(sumOther+tab[0]>=maxScore)
				{
					tab[0]=maxScore;
				}
				else
				tab[0]+=sumOther;	
			}
			
		}
			v.push_back(tab[0]);

	}
	for(int j:v)
		cout<<j<<endl;
	return 0;
}

