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

    if (n >= 0)
        cout << n << "\n";
    else
    {
        // compare
        int rem1 = n % 10;
        int rem2 = n % 100;

        int num1 = n / 10;
        int num2 = n / 100;
        num2 = num2 * 10 + rem1;

        if (num1 <= num2)
            cout << num2 << "\n";
        else
            cout << num1 << "\n";
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