#include <bits/stdc++.h>
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

bool check(long long *a, int n, long long val)
{
    // cout<<val<<"\n";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
        {
            return true;
        }
    }
    return false;
}
void sol()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        bool p = check(a, n, a[0] * a[1]);
        if (p == false)
        {
            cout << 0 << "\n";
            continue;
        }
        bool q = check(a, n, a[n - 1] * a[n - 2]);
        if (q == false)
        {
            cout << 0 << "\n";
            continue;
        }
        bool r = check(a, n, a[0] * a[n - 1]);
        if (r == false)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    // int t;
    // cin >> t;

    // while (t--)
    // {
    // 	int n;
    // 	cin >> n;

    // 	int a[n];

    // 	int pos = 0;
    // 	int neg = 0;
    // 	int no = 0;
    // 	int po = 0;

    // 	for (int i = 0; i < n; i++) {
    // 		cin >> a[i];

    // 		if (a[i] > 1) {
    // 			pos++;
    // 		}
    // 		if (a[i] < -1) {
    // 			neg++;
    // 		}
    // 		if (a[i] == -1) {
    // 			no++;
    // 		}
    // 		if (a[i] == 1) {
    // 			po++;
    // 		}
    // 	}

    // 	if (n == 1) {
    // 		cout << 1 << nline;
    // 		continue;
    // 	}

    // 	if (n == 2) {
    // 		if (a[0]*a[1] == a[0] || a[0]*a[1] == a[1]) {
    // 			cout << 1 << nline;
    // 		}

    // 		else {
    // 			cout << 0 << nline;
    // 		}
    // 		continue;
    // 	}

    // 	if (pos == 0 && neg == 0) {
    // 		if (no > 1) {
    // 			if (po == 0) {
    // 				cout << 0 << nline;
    // 			}
    // 			else {
    // 				cout << 1 << nline;
    // 			}
    // 		}
    // 		else {
    // 			cout << 1 << nline;
    // 		}
    // 	}
    // 	else if (pos == 0 && neg == 1) {
    // 		if (no > 0) {
    // 			cout << 0 << nline;
    // 		}
    // 		else {
    // 			cout << 1 << nline;
    // 		}
    // 	}
    // 	else {
    // 		cout << 0 << nline;
    // 	}
    // }
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

    sol();

    // ll t = 1;
    // cin >> t;
    // for (int i = 1; i <= t; i++ )
    // {
    // 	sol();
    // }

    return 0;
}