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
    // int a[n];
    // for (int i = 0; i < n; ++i)
    // {
    // 	cin >> a[i];
    // }
    // int max = 1, min = 0;
    // for (int i = 0; i < n; ++i)
    // {
    // 	if (i % 2 == 0 && abs(a[min]) > abs(a[i]) )
    // 		min = i;
    // 	if (i % 2 == 1 && abs(a[max]) < abs(a[i]) )
    // 		max = i;
    // }

    // if (min != 0 && max != 1) {
    // 	swap(a[min], a[max]);
    // }
    // else {
    // 	if (abs(a[min]) < abs(a[max])) {
    // 		swap(a[min], a[max]);
    // 	}
    // }
    // int ans = 0;

    // for (int i = 0; i < n; ++i)
    // {
    // 	if (i % 2 == 0)
    // 		ans += abs(a[i]);
    // 	else
    // 		ans -= abs(a[i]);
    // }
    // cout << ans << nline;

    ll sum = 0;
    ll maximum = INT_MAX, minimum = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if ((i % 2 == 0))
        {
            sum += abs(x);
            maximum = min(maximum, abs(x));
        }
        else
        {
            sum -= abs(x);
            minimum = max(minimum, abs(x));
        }
    }

    cout << max(sum, sum + (2ll * minimum) - (2ll * maximum)) << endl;
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