#include <iostream>

using namespace std;

int main()
{
	int x;
	int sum=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		string xy;
		cin>>xy;
	
			if (xy =="Icosahedron")
			{
						sum+=20;	
			}
			if (xy =="Tetrahedron")
			{
						sum+=4;
			}

			if (xy =="Cube")
			{
						sum+=6;
			}
			if (xy =="Octahedron")
			{
						sum+=8;
			}
			if (xy =="Dodecahedron")
			{
						sum+=12;
			}
		}	


			cout<<sum;
	return 0;
}

