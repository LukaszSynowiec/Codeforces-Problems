#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int tab[x][x];
	for(int row=1;row<=x;row++)
	{
		for(int col=1;col<=x;col++)
			{
				if(row==1)
					tab[row-1][col-1]=1;
				else if(col==1)
					tab[row-1][col-1]=1;
				else
					tab[row-1][col-1]=tab[row-2][col-1]+tab[row-1][col-2];

			}
	}
	cout<<tab[x-1][x-1];
	return 0;
}

