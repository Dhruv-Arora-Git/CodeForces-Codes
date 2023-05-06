/*
 ___
|   \  | |__    _,_           __     __
| /\ \ | '_ \  | __| | | | |  \ \   / /
| \/ / | | | | | |   | (_) |   \ \_/ /
|___/  |_| |_| |_|   \ ___ /    \___/
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
#define ll long long int
#define ld long double
#define mp make_pair
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
#define deb(x) cout << #x << " = " << x << '\n'
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << '\n'

// ----------------------------------------------
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll Lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll fastPower(ll base, ll power)
{
    ll ans = 1;
    while (base > 0)
    {
        if ((power & 1) == 1)
            ans *= base;
        base = base * base;
        power = power >> 1;
    }
    return ans;
}
// ----------------------------------------------

const int mod = 1'000'000'007;

bool rec(int n, int &m, map<int, bool> &dp) {
	if(n == m)
		return true;
	if(n < m)
		return false;

	if(dp.find(n) != dp.end())
		return dp[n];

	bool flag = false;
	if(n % 3 == 0) {
		int rem = n / 3;
		flag = flag || rec(n - 2 * rem, m) || rec(n - rem, m);
	}
	return dp[n] = flag;
}

void dhruv() {
	int n, m;
	cin >> n >> m;
	
	if(m > n) {
		cout << "NO\n";
		return;
	}

	if(m == n) {
		cout << "YES\n";
		return;
	}


	map<int, bool> dp;
	
	if(rec(n, m, dp)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

}

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--) {
    	dhruv();
    }

    return 0;
}