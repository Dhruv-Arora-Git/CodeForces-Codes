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

void dhruv() {
	int n;
	cin >> n;
	
	map<int, int> one, two, both;

	for (int i = 0; i < n; ++i)
	{
		int time;
		cin >> time;

		string skill;
		cin>> skill;
		if(skill == "10")
			one[time] = skill;
		else if(skill == "01")
			two[time] = skill;
		else if(skill == "11")
			both[time] = skill;
	}

	int s1 = (one.size() > 0) ? *one.begin().first : -1;
	int s2 = (two.size() > 0) ? *two.begin().first : -1;

	if(s1 == -1 || s2 == -1) {
		if(both.size() > 0) {
			cout << *both.begin().first << "\n";
		} else {
			cout << "-1\n";
		}
	}
	else {
		if(both.size() > 0) {
			cout << min(*one.begin().first + *two.begin().first, *both.begin().first) << "\n";

		} else {
cout << (*one.begin().first + *two.begin().first) << "\n";

		}
	}
	

}

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--) {
    	dhruv();
    }

    return 0;
}