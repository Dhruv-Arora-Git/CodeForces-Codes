/*
 ___
|   \  | |__    _,_           __     __
| /\ \ | '_ \  | __| | | | |  \ \   / /
| \/ / | | | | | |   | (_) |   \ \_/ /
|___/  |_| |_| |_|   \ ___ /    \___/
*/
// https://codeforces.com/contest/1820/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
#define ll long long int
#define ld long double
#define mp make_pair
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define for(i, n, a) for (int i = 0; i < n; i += a)
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

void dhruv()
{
    string s;
    cin >> s;

    int cnt = 0;
    int n = sz(s);
    if (n == 1)
    {
        if (s[0] == '^')
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
        return;
    }

    for (i, n - 1, 1)
    {
        if (s[i] == '_' && s[i + 1] == '_')
        {
            ++cnt;
        }
        else if (s[i] == '^' && s[i + 1] == '_')
        {
            if (i + 2 >= n)
            {
                break;
            }
            if (s[i + 2] == '_')
            {
                ++i;
                ++cnt;
            }
        }
    }
    if (s[0] == '_')
        ++cnt;
    if (s[n - 1] == '_')
        ++cnt;

    cout << cnt << "\n";
}

int main()
{
    fastio;
    // cout<<fixed<<setprecision(9);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        // solve function
        dhruv();
    }

    return 0;
}