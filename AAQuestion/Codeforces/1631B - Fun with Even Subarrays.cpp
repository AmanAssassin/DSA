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

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

void solve()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // int element  = a[n - 1];
        // int i = n - 2;
        // int ans = 0;
        // int effect = 1;
        // while (i >= 0) {
        // 	int flag = 1;
        // 	for (int j = 0; j < effect; j++) {
        // 		debug(i);
        // 		if (i < 0) {
        // 			break;
        // 		}
        // 		if (i >= 0 && a[i] != element && flag ) {
        // 			ans++;
        // 			flag = 0;
        // 		}
        // 		i--;
        // 	}
        // 	effect = effect * 2;
        // }
        // cout << ans << endl;
        int ans = 0, val = a[n - 1], length = 1, j = n - 1;
        j--;
        while (j >= 0)
        {
            while (j >= 0 && a[j] == val)
            {
                length++;
                j--;
            }
            if (j < 0)
                break;
            ans++;
            j -= length;
            length *= 2;
        }
        cout << ans << nline;
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

    solve();

    return 0;
}