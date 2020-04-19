#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

	string x;
	cin>>x;

	int count=0;
	for(int i=0;i<x.size();i++)
	{
		if(x[i]=='a')
			count++;

	}
	int size=x.size();
	if(count>size/2)
		cout<<size;
	else
		{
			int i=0;
			while(size-count>=count)
			{
				if(x[i]!='a')
				{
					size--;
					if(size-count<count)
						break;
				
				}
				i++;
			}
			cout<<size;
		}
	return 0;
}

