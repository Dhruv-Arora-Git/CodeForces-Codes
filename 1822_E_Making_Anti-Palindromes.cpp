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

void dhruv()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n & 1)
    {
        cout << "-1\n";
        return;
    }
    int pair[26] = {0};
    int cnt[26] = {0};

    for (int i = 0; i < n / 2; ++i)
        if (s[i] == s[n - i - 1])
            ++pair[s[i] - 'a'];

    for (int i = 0; i < n; ++i)
        ++cnt[s[i] - 'a'];

    int total = 0, mx = 0, mx1 = 0;

    for (int &i : pair)
    {
        total += i;
        mx = max(mx, i);
    }

    for (int &i : cnt)
        mx1 = max(mx1, i);

    if (mx1 > n / 2)
    {
        cout << "-1\n";
    }
    else
    {
        if (mx > total - mx)
        {
            cout << mx << "\n";
        }
        else
        {
            cout << total / 2 + (total & 1) << "\n";
        }
    }
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