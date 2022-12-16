// https://codeforces.com/problemset/problem/189/A

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

int rec(int n, int a, int b, int c, int dp[], int cnt)
{
    if (n == 0)
        return cnt;
    if (n < 0)
        return -1e9;

    if (dp[n] != -1)
        return dp[n];

    int ans = -1e9;

    if (n - a >= 0)
        ans = max(ans, rec(n - a, a, b, c, dp, cnt + 1));
    if (n - b >= 0)
        ans = max(ans, rec(n - b, a, b, c, dp, cnt + 1));
    if (n - c >= 0)
        ans = max(ans, rec(n - c, a, b, c, dp, cnt + 1));

    return dp[n] = ans;
}

void dhruv()
{
    int n;
    cin >> n;
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);

    int dp[n + 1];
    memset(dp, -1, sizeof dp);

    cout << rec(n, arr[0], arr[1], arr[2], dp, 0) << "\n";
}

int main()
{
    fastio;
    // cout<<fixed<<setprecision(9);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        // solve function
        dhruv();
    }

    return 0;
}