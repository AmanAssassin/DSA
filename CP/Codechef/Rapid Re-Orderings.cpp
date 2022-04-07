#include "bits/stdc++.h"
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define FO(i, a, n) for (int i = a; i < n; i++)
#define deb(x) cout << #x << " " << x << "\n";
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define el "\n"
#define pel cout << "\n";
#define accuracy setprecision(20)
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define mii map<int, int>
#define all(x) x.begin(), x.end()
typedef long long int ll;
typedef long double ld;
const ll mod = 1e9 + 7;
const ll mod1 = 998244353;
const long double Pi = acos(-1);
const long double euler = 2.7182818284590452353602;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPerfect(ll n)
{
    ll x = sqrt(n);
    if (x * x == n)
        return true;
    else
        return false;
}
ll bin(ll n, ll kkk)
{
    int i;
    ll ans1 = 1;
    ll ans = 0;
    // deb(n);
    // deb(kkk);
    int xxx = log2(n);
    // deb(xxx);
    for (i = 0; i <= xxx; i++)
    {

        ll k = n >> i;
        // deb(k);
        if (k & 1)
        {
            for (int j = 0; j < i; j++)
            {
                ans1 *= kkk;
                ans1 %= mod;
            }
            ans += ans1;
            ans1 = 1;
            ans %= mod;
        }
    }

    return ans;
}
ll ceilInt(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    else
        return a / b + 1;
}
int binarySearch(ll arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x && m != 0)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return 0;
}
ll gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
ll power(ll a, ll b)
{
    ll pow = 1;
    while (b)
    {
        if (b & 1)
        {
            pow = pow * a;
            // pow%=mod1;
            --b;
        }
        a = a * a;
        // a%=mod1;
        b = b / 2;
    }
    return pow;
}
void SieveOfEratosthenes(ll n, vi &v)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (ll p = 2; p <= n; p++)
    {
        if (prime[p] && n % p == 0)
            v.pb(p);
    }
}
ld squareRoot(ld n)
{
    /*We are using n itself as initial approximation
    This can definitely be improved */
    ld x = n;
    ld y = 1;
    ld e = 0.00000000001; /* e decides the accuracy level*/
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

// please use ll instead of int ffs.
void psi(int T)
{
    int n;
    cin >> n;
    vi b, v;
    int x;
    mii m, ch;
    fo(i, 2 * n)
    {
        cin >> x;
        b.pb(x);
        if (m[x] == 0)
            v.pb(x);
        m[x]++;
    }

    // sorting
    sort(all(v));
    int k = 0;
    ch[v[0]]++;
    for (int i = 1; i < v.size(); i++)
    {
        int mm = ceil((i + 1) / 2.0);
        ch[v[mm - 1]]++;
    }
    k = v.size() - 1;
    ch[v[k]]++;

    for (int i = k - 1; i >= 0; i--)
    {
        int mm;
        mm = i + ceil((k - i + 1) / 2.0);

        ch[v[mm - 1]]++;
    }

    for (auto i = m.begin(), j = ch.begin(); i != m.end(); i++, j++)
    {
        if (*i != *j)
        {
            cout << "-1\n";
            return;
        }
        /* code */
    }

    fo(i, v.size())
    {
        cout << v[i] << ' ';
    }

    pel;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ifstream fin("test.in");
    // ofstream fout("test.out");
    int T = 1;
    cin >> T;
    while (T--)
    {
        psi(T);
    }

    // cout << "taken " << clock()/CLOCKS_PER_SEC << " seconds" << '\n';
    return 0;
}