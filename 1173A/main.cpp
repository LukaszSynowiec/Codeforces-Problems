#include <iostream>
#include <vector>
using namespace std;

int main(int argc,char *argv[])
{
	cout<<argv[1]<<endl;
	for(int i=0;i<atoi(argv[1]);i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(z==0)
		{
			if(x<y)
				cout<<"-";
			else if(x>y)
				cout<<"+";
			else
				cout<<"0";
		}
		else
		{
			if(x>y&&y+z<x)	
				cout<<"+";
			else if(x<y&&x+z<y)
				cout<<"-";
			else
				cout<<"?";
		}
	}

		cout<<endl;
	return 0;
}
