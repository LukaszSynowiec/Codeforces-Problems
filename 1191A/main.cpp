#include <iostream>
using namespace std;


int GetCat(int x)
{
	if(x%4==1)
		return 1;
	if(x%4==3)
		return 2;
	if(x%4==2)
		return 3;
	if(x%4==0)
		return 4;
}

int main()
{
	int hp;
	cin>>hp;
	//int tempHp=hp;
	int curentCat=GetCat(hp);
	int maxIncrase=0;
	if(curentCat==1)
	{
		cout<<"0 A";
		return 0;
	}
	for(int i=0;i<=2;i++)
	{
		if(GetCat(hp+i)<curentCat)
		{
			curentCat=GetCat(hp+i);
			maxIncrase=i;
		}

	}
	switch(curentCat)
	{
		case 1:
		{
				cout<<maxIncrase<<" A";
				break;
		}
		case 2:
		{
				cout<<maxIncrase<<" B";
				break;
		}
		case 3:
		{
				cout<<maxIncrase<<" C";
				break;
		}
		case 4:
		{
				cout<<maxIncrase<<" D";
				break;
		}
	}
	return 0;
}
