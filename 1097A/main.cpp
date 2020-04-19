#include <iostream>
using namespace std;
int main()
{
	string x;
	cin>>x;
	string c[5];
	cin>>c[0]>>c[1]>>c[2]>>c[3]>>c[4];
	char x1=x[0];
	char x2=x[1];
	for(int i=0;i<5;i++)
	{
		if(x1==c[i][0]||x2==c[i][1])
			{
				cout<<"YES";
				return 0;
			}
		
	}
	cout<<"NO";
	return 0;
}

