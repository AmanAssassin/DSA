// Aman Assassin Here
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

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
#define fo(i, n) for (i = 0; i < n; i++)
#define tc ll t sc cin >> t sc while (t--)
#define sc ;
#define LCM(a, b) (a * b) / __gcd(a, b)
#define HCF(a, b) __gcd(a, b)
#define sza(a) ((int)a.size())

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void solve()
{

    int n;
    cin >> n;
    if (n == 3)
    {
        cout << 3 << " " << 2 << " " << 1 << nline;

        cout << 3 << " " << 1 << " " << 2 << nline;

        cout << 1 << " " << 3 << " " << 2 << nline;
    }
    else
    {
        std::vector<int> a;
        for (int i = n; i > 0; i--)
        {
            a.pb(i);
        }
        for (int i = 0; i < n; ++i)
        {
            int tamp = a[0];
            for (int j = 1; j < n; ++j)
            {
                a[j - 1] = a[j];
                cout << a[j - 1] << " ";
            }
            a[n - 1] = tamp;
            cout << tamp << nline;
        }
    }
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

    ll t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}