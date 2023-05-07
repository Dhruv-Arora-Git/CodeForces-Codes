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


void dfs(vector<vector<int>> &arr, int i, int j, int &n, int &m, int &area) {
	if(i < 0 || i >= n || j < 0 || j >= m || arr[i][j] == 0)
		return;

	area += arr[i][j];
	arr[i][j] = 0;

	dfs(arr, i + 1, j, n, m, area);
	dfs(arr, i - 1, j, n, m, area);
	dfs(arr, i, j + 1, n, m, area);
	dfs(arr, i , j - 1, n, m, area);

} 

void dhruv() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> arr(n, vector<int>(m));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
		}
	}

	int mxArea = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(arr[i][j] != 0) {
				int area = 0;
				dfs(arr, i, j, n, m, area);
				mxArea = max(mxArea, area);
			}
		}
	}

	cout << mxArea << "\n";
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