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
    int n;
    cin >> n;
    int arr[n];

    for (i, n, 1)
        cin >> arr[i];
    bool flag = false, flag2 = false, flag3 = false;
    for (i, n - 1, 1)
    {
        if (arr[i] == -1 && arr[i + 1] == -1)
        {
            flag = true;
            break;
        }
        if ((arr[i] == 1 && arr[i + 1] == -1) || (arr[i] == -1 && arr[i + 1] == 1))
        {
            flag2 = true;
        }
        if (arr[i] == 1 && arr[i + 1] == 1)
        {
            // arr[i] = arr[i + 1] = -1;
            flag3 = true;
        }
    }
    int sum = accumulate(arr, arr + n, 0);
    if (flag)
    {
        cout << sum + 4 << "\n";
    }
    else if (flag2)
    {
        cout << sum << "\n";
    }
    else if (flag3)
    {
        cout << sum - 4 << "\n";
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