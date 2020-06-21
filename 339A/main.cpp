#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size() == 0)
        cout << s;
    else {
        vector<int> x;
            
        for(int i = 0; i < s.size(); i += 2) {
            int y = (int)s[i] - 48;
            x.push_back(y);
        }
        sort(x.begin(), x.end());
        for(int i = 0; i < x.size(); i++) {
            if(i == x.size() - 1)
                cout << x[i];
            else
                cout << x[i] << "+";
        }
    }

    return 0;
}
