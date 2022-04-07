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

    int n;
    cin >> n;
    // std::vector<int> v;
    // int ans = 0;
    // map<int , int> m;
    // for (int i = 0; i < 2 * n; ++i)
    // {
    // 	cin >> v[i];

    // }
    // int min = *min_element(v.begin(), v.end());
    // int max = *max_element(v.begin(), v.end());

    // int ca = 0;
    // int cb = 0;
    // for (auto it1 : v)
    // {
    // 	if (it1 == max)
    // 		ca++;
    // }
    // for (auto it2 : v)
    // {
    // 	if (it2 == min)
    // 		cb++;
    // }
    // if (min < 1) {
    // 	if (ca % 2 == 0 && cb % 2 == 0) cout << "YES" << nline;
    // 	else
    // 		cout << "NO" << nline;
    // }
    map<int, int> mm;

    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        mm[x]++;
    }

    bool f = true;

    for (int i = 0; i < 2 * n; i++)
    {
        if (mm[i] == 1)
        {
            f = false;
            break;
        }
        else if (mm[i] == 0)
            break;
    }

    if (f == true)
        cout << "YES" << nline;
    else
        cout << "NO" << nline;
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
    {
        solve();
    }

    return 0;
}