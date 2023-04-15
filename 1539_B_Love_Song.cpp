/*
 ___
|   \  | |__    _,_           __     __
| /\ \ | '_ \  | __| | | | |  \ \   / /
| \/ / | | | | | |   | (_) |   \ \_/ /
|___/  |_| |_| |_|   \ ___ /    \___/
*/
// https://codeforces.com/problemset/problem/1539/B

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
#define ll long long int
#define ld long double
#define mp make_pair
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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int pref[n] = {0};
    pref[0] = (s[0] - 'a' + 1);
    // deb2(pref[0], s[0] - 'a' + 1);
    for (int i = 1; i < n; ++i)
    {
        pref[i] = pref[i - 1] + (s[i] - 'a' + 1);
        // cout << pref[i] << " , ";
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        if (l == 0)
        {
            cout << pref[r] << "\n";
        }
        else
        {
            cout << pref[r] - pref[l - 1] << "\n";
        }
    }
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