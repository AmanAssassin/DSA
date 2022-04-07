// Assassin Here
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

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int find(ll n)
{
    int smallest = 9;
    while (n)
    {
        int r = n % 10;

        // Find the smallest digit
        smallest = min(r, smallest);

        n = n / 10;
    }
    return smallest;
}

void solve()
{

    int T;
    cin >> T;
    while (T--)
    {
        ll n, p, q;
        cin >> n >> p >> q;
        string s;
        cin >> s;
        ll a = 0, b = 0;
        bool flag = 1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                flag = !flag;
            }
            if (flag)
                a++;
            else
                b++;
        }
        p = abs(p), q = abs(q);
        if (min(a, b) >= max(p, q))
        {
            ll maxp = max(a, b), minp = min(a, b);
            if (((maxp - p) % 2 != 0 && (minp - p) % 2 != 0) || ((maxp - q) % 2 != 0 && (minp - q) % 2 != 0))
                cout << "NO"
                     << "\n";
            else
            {
                if (((maxp - p) % 2 != 0 && (maxp - q) % 2 != 0) || ((minp - p) % 2 != 0 && (minp - q) % 2 != 0))
                    cout << "NO"
                         << "\n";
                else
                    cout << "YES"
                         << "\n";
            }
        }
        else if (min(a, b) < min(p, q) || max(a, b) < max(p, q))
            cout << "NO"
                 << "\n";
        else
        {
            ll maxp = max(a, b), minp = min(a, b);
            ll maxd = max(p, q), mind = min(p, q);
            if ((maxp - maxd) % 2 != 0 || (minp - mind) % 2 != 0)
                cout << "NO"
                     << "\n";
            else
                cout << "YES"
                     << "\n";
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