#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int b,p,f,h,c;
		int Hcount=0;
		int Ccount=0;
		cin>>b>>p>>f>>h>>c;
		while(true)
		{

				if(h>c||f==0)
				{
					if(p>0&&b-2>=0)
					{
						b-=2;
						p--;
						Hcount++;
						continue;
					}
				}
			
				
				if(f>0&&b-2>=0)
				{
					b-=2;
					f--;
					Ccount++;
					continue;
				}
				break;

		}
		cout<<(Hcount*h)+(Ccount*c)<<endl;
	}
	return 0;
}

