#include<iostream>
#include<string>

using namespace std;


int main()
{
	string a,b;
	cin>>a>>b;
	int s=b.size();
	for(int i=0;i<s;i++)
	{
		if(tolower(a[i])==tolower(b[i])&&i<s-1)
			continue;
		if(tolower(a[i])>tolower(b[i]))
			cout<<"1"<<endl;
		else if(tolower(a[i])<tolower(b[i]))
			cout<<"-1"<<endl;
		else
			cout<<"0"<<endl;
		break;
	}
	return 0;
}
