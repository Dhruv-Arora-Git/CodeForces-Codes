/*
 ___
|   \  | |__    _,_           __     __
| /\ \ | '_ \  | __| | | | |  \ \   / /
| \/ / | | | | | |   | (_) |   \ \_/ /
|___/  |_| |_| |_|   \ ___ /    \___/
*/
// https://codeforces.com/contest/1800/problem/B

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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int arr[26] = {0};
    int arr2[26] = {0};
    for (int i = 0; i < n; ++i)
    {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
            ++arr2[ch - 'A'];
        else
            ++arr[ch - 'a'];
    }

    int pairs = 0;
    for (int i = 0; i < 26; ++i)
    {
        int p = min(arr[i], arr2[i]);
        pairs += p;

        arr[i] -= p;
        arr2[i] -= p;
        int add = min(k, max(arr[i], arr2[i]) / 2);
        k -= add;
        pairs += add;
    }
    cout << pairs << "\n";
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