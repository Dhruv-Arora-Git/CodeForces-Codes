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
// ----------------------------------------------

const int mod = 1'000'000'007;

void dhruv()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    if (n - 1 > m)
    {
        cout << "NO\n";
        return;
    }

    int wildcardIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            wildcardIndex = i;
            break;
        }
    }

    if (wildcardIndex == -1)
    {
        if (s == t)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }

    string prefix = s.substr(0, wildcardIndex);
    string suffix = s.substr(wildcardIndex + 1);

    if (t.substr(0, wildcardIndex) != prefix)
    {
        cout << "NO\n";
        return;
    }

    int tSuffixStart = m - suffix.length();
    if (t.substr(tSuffixStart) != suffix)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main()
{
    fastio;
    // cout << fixed << setprecision(9);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        // solve function
        dhruv();
    }

    return 0;
}