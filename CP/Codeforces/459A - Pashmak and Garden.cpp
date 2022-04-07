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

    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int diff = abs(x2 - x1) + abs(y2 - y1);

    if (x1 == x2)
    {
        cout << x1 + diff << " " << y1 << " " << x2 + diff << " " << y2 << nline;
    }
    else if (y1 == y2)
    {
        cout << x1 << " " << y1 + diff << " " << x2 << " " << diff + y2 << nline;
    }
    // slope to find cross points
    else if (abs(y2 - y1) == abs(x2 - x1))
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << nline;
    }
    else
        cout << -1;
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
    // cin >> t;
    while (t--)
        sol();

    return 0;
}