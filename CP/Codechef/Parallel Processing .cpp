// Aman maurya
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define MIN3(x, y, z) min(x, min(y, z)) /* only takes 3 argument soMIN3(a, b, MIN3(c, d, e))*/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void sol()
{

    ll n;
    cin >> n;
    ll a[n], d[n + 1];
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    d[0] = a[0];
    ll first = d[0], second = sum - a[0];
    ll ans = max(first, second);
    for (ll i = 1; i < n; ++i)
    {
        /* code */
        d[i] = d[i - 1] + a[i];
        first = d[i];
        second = sum - d[i];
        ans = min(ans, max(first, second));
    }
    cout << ans << nline;

    // cout << sum << nline;
    // if (n == 1)
    // 	cout << a[0] << nline;
    // else if (sum == n) {
    // 	cout << n / 2 << nline;
    // }
    // else
    // 	cout << sum % 10 << nline;

    // int l = a[0], r = 0;
    // sort(a, a + n);
    // for (int i = 1; i < n; ++i)
    // {
    // 	if (l < r) {
    // 		l += a[i];
    // 	}
    // 	if (r > l)
    // 	{
    // 		r += a[i];
    // 	}
    // }
    // cout << max(l, r) << nline;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("error.txt", "w", stdout);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Actual code Her

    // sol();

    ll t = 1;
    cin >> t;
    while (t--)
        sol();

    return 0;
}