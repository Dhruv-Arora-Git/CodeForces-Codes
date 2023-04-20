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
    int arr[n] = {6, 7, 3, 4, 4, 6, 5};
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int arr2[n] = {6, 3, 4, 4, 7, 6, 5};
    for (int i = 0; i < n; ++i)
        cin >> arr2[i];

    int mini = 1e9, maxi = -1e9;
    int point = 0;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == arr2[i] && point == 0)
            l = i + 1;
        else if (arr[i] != arr2[i] && point == 0)
            point = 1;
    }
    point = 0;

    for (int i = n - 1; i >= 0; --i)
    {
        if (arr[i] == arr2[i] && point == 0)
            r = i - 1;
        else if (arr[i] != arr2[i] && point == 0)
            point = 1;
    }

    for (int i = l; i <= r; ++i)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    while (arr2[l - 1] <= mini && l > 0)
    {
        mini = arr2[l - 1];
        --l;
    }

    while (arr2[r + 1] >= maxi && r < n - 1)
    {
        maxi = arr2[r + 1];
        ++r;
    }
    cout << (l + 1) << " " << (r + 1) << "\n";
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