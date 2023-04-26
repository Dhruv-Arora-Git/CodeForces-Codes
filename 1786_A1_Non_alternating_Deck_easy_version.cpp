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
    if (n < 6)
    {
        cout << 1 << " " << (n - 1) << "\n";
        return;
    }
    int alice = 1, lastAlice = 1;
    int bob = 5, lastBob = 5;
    n -= 6;
    while (n)
    {
        if (n - (lastAlice + 8) >= 0)
        {
            n -= (lastAlice + 8);
            alice += (lastAlice + 8);
            lastAlice += 8;
        }
        else
        {
            alice += n;
            n = 0;
        }
        if (n <= 0)
            break;

        // deb2(n, alice);
        if (n - (lastBob + 8) >= 0)
        {
            n -= (lastBob + 8);
            bob += (lastBob + 8);
            lastBob += 8;
        }
        else
        {
            bob += n;
            n = 0;
        }
    }
    // deb(n);
    cout << alice << " " << bob << "\n";
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