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

    if (n == 1)
    {
        if (arr[0] > 1)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";

        return;
    }

    int mx_ele = -1, mx_index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx_ele)
        {
            mx_ele = arr[i];
            mx_index = i;
        }
    }

    int find = mx_ele - 1;

    for (int i = 0; i < n; ++i)
    {
        if (i != mx_index && find <= arr[i])
        {
            cout << "YES"
                 << "\n";
            return;
        }
    }
    cout << "NO"
         << "\n";
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