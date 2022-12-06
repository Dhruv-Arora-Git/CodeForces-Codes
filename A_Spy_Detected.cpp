// https://codeforces.com/problemset/problem/1512/A

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

void dhruv()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans1 = -1, ans2 = -1, ans = -1;

    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] != arr[i + 1])
        {
            ans1 = i;
            ans2 = i + 1;
            break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (i != ans1)
        {
            if (arr[i] == arr[ans1])
            {
                ans = ans2;
                break;
            }
        }
        if (i != ans2)
        {
            if (arr[i] == arr[ans2])
            {
                ans = ans1;
                break;
            }
        }
    }

    cout << (ans + 1) << "\n";
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