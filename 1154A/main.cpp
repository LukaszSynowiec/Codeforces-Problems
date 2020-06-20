#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long a[4];
	for(long long i = 0; i < 4; i++) {
		cin >> a[i];
	}
	sort(a, a + 4);
	long long x, y, z;
	x = a[3] - a[2];
	y = a[3] - a[1];
	z = a[3] - a[0];
	cout << x << " " << y << " " << z << endl;


	return 0;
}

