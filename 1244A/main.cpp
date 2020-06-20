#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	bool haveRes=false;
	for(int i=0;i<x;i++)
	{
		int lectures,practical,penLectures,practicalPencils,implements;
		cin>>lectures>>practical>>penLectures>>practicalPencils>>implements;
		for(int n=1;n<implements;n++)
		{
			for(int m=1;m<implements;m++)
			{
				if(n*penLectures>=lectures&&m*practicalPencils>=practical&&n+m<=implements&&!haveRes)
				{
					cout<<n<<" "<<m<<endl;
					haveRes=true;
				}
			}
		}
		if(!haveRes)
			cout<<"-1"<<endl;
		haveRes=false;
	}
	return 0;
}

