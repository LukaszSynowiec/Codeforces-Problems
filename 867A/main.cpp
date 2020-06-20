#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	string ch;
	int SF=0;
	int FS=0;
	
		cin>>ch;
	

	for(int i=1;i<=x;i++)
	{
		string a="";
		a+=ch[i-1];
		a+=ch[i];
		if(a=="FS")
			FS++;
		if(a=="SF")
			SF++;

	}

	if(SF>FS)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

