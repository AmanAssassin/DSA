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
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds;
// find_by_order, order_of_key

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

    int n;
    cin >> n;
    int a[n];
    int add = 0;
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    int x = 0, y = 0;
    if (odd % 2 == 1)
        x = even;
    else
        x = odd / 2;

    y = even;

    int ans = 0;
    if (x <= y)
        ans = x;
    else
        ans = y;
    cout << ans << nline;
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

    ll T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout << "Case #" << i << ":" ;
        sol();
        // cout << nline;
    }

    return 0;
}
