#include <iostream>
using namespace std;
int mat[5][5];
int moves=0;
int posx,posy;
int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(mat[i][j]==1)
			{
				posx=i;
				posy=j;
			}
		}
	}
	while(posx!=2||posy!=2)		
	{
		if(posx<2)
		{
			posx++;
			moves++;
		}
		else if(posx>2)
		{
			posx--;
			moves++;
		}
		if(posy<2)
		{
			posy++;
			moves++;
		}
		else if(posy>2)
		{
			posy--;
			moves++;
		}
	}
	cout<<moves;
		
	return 0;
}

