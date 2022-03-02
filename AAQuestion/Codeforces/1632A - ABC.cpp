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

ll claculation(ll n)
{
    ll no = 0, cnt = 0;
    while (n)
    {
        if (n % 2 == 0)
            no += (1LL << cnt);
        n /= 2, cnt++;
        if (n <= 0)
            break;
    }
    return no;
}

void solve()
{
    ll T;
    cin >> T;
    while (T--)
    {

        ll n;
        cin >> n;
        string s;
        cin >> s;

        // int zero = 0, one = 0;
        // for (int i = 0; i < n; i++) {
        // 	if (s[i] == '0') zero++;
        // 	if (s[i] == '1') one++;
        // }

        // cout << zero << " " << one << nline;

        if (n >= 3)
            cout << "NO" << nline;
        else if (n == 1)
            cout << "YES" << nline;
        else if (n == 2)
        {
            {
                if (s[0] == s[1])
                    cout << "NO" << nline;
                else
                    cout << "YES" << nline;
            }
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

    solve();

    return 0;
}