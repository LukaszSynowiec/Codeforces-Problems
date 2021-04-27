#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int current=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        current-=x;
        current+=y;
        if(current>max)
            max=current;
    }
    cout<<max;
    return 0;
}
