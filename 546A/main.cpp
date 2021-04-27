#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int all=0;
    for(int i=1;i<=w;i++)
    {
        all+=i*k;
    }
    if(n>=all)
        cout<<"0";
    else
        cout<<all-n;
    return 0;
}
