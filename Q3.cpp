#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define IoFast ios_base::sync_with_stdio(0);cin.tie(0);

const int maxn = 1e5 + 20;
ll c, sum, n;

int main()
{
	IoFast;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> c >> sum;
		if(sum > c) {
			cout << ((sum % c) * ((sum / c) + 1) * ((sum / c) + 1)) + ((c - (sum % c)) * (sum / c) * (sum / c)) << endl;
		}
		else {
			cout << sum << endl;
		}
	}
}
