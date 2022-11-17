// дз чертоусова for37
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int k, n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += pow(i, i);
	}
	cout << sum << " ";




}

