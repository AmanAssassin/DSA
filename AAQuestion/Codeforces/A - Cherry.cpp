

#pragma region TEMPLATE

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <map>
#include <cstdio>
#include <cmath>
#include <stack>
#include <limits.h>
#include <bitset>
#include <ctime>

#include <unordered_map>
#include <unordered_set>
#include <set>

using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

typedef pair<int, int> pii;

typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<string, string> mss;

typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<bool> vb;
typedef vector<string> vs;

#define MOD1 1000000007

#define MOD2 1000000009

#define all(v) v.begin(), v.end() // to be tested

#define OUT0(x) cout << (x) << " "
#define OUT1(x) cout << (x) << endl
#define OUT2(x, y) cout << (x) << " " << (y) << endl
#define TRACE1(x) cout << (#x) << " " << (x) << endl
#define TRACE2(x, y) cout << (#x) << " " << (x) << ", " << (#y) << " " << (y) << endl
#define TRACE3(x, y, z) cout << (#x) << " " << (x) << ", " << (#y) << " " << (y) << ", " << (#z) << " " << (z) << endl

#define MIN3(x, y, z) min(x, min(y, z))
#define MAX3(x, y, z) max(x, max(y, z))

#define IN1(x) cin >> (x)
#define IN2(x, y) cin >> (x) >> (y)
#define IN3(x, y, z) cin >> (x) >> (y) >> (z)

#define HR cout << "\n-------------------------\n"
#define LINE cout << "\n"

void i_o()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "a", stdout);

    cout << __FILE__ << endl;
#else
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
}

template <typename T>
void inpA(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

template <typename T>
void inpV(vector<T> &vec, int n)
{
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}
template <typename T>
void outV(const vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
}
template <typename T>
inline T sumV(const vector<T> &vec)
{
    T res = 0;
    for (int i = 0; i < vec.size(); i++)
        res += vec[i];
    return res;
}

template <typename T>
inline int maxIndexV(const vector<T> &vec)
{
    return max_element(vec.begin(), vec.end()) - vec.begin();
}

template <typename T>
inline int minIndexV(const vector<T> &vec)
{
    return min_element(vec.begin(), vec.end()) - vec.begin();
}

template <typename T>
inline void sortV(vector<T> &vec) { sort(vec.begin(), vec.end()); }
template <typename T>
inline void rSortV(vector<T> &vec) { sort(vec.begin(), vec.end(), greater<T>()); }

// make it return index or -1 // test it
template <typename T>
inline int bSearchV(vector<T> &vec, T key)
{
    auto itr = lower_bound(vec.begin(), vec.end(), key);
    if (itr == vec.end() || *itr != key)
    {
        return -1;
    }
    else
    {
        return (itr - vec.begin());
    }
}

#pragma endregion

//----------------------------------------------------
//---------START OF SOLUTION--------------------------
//----------------------------------------------------

// global var

void pre()
{
}

int main()
{
#ifndef ONLINE_JUDGE
    clock_t clock_begin = clock();
#endif

    i_o();
    pre();

    // ----- START

    lli t;
    lli ans;
    // define all variables

    cin >> t;
    while (t--)
    {
        // input
        int n;
        cin >> n;

        vlli a;
        inpV(a, n);

        ans = 0LL;

        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[i] * a[i + 1]);
        }

        // print ans
        cout << ans << endl;
    }

    // ---- END

#ifndef ONLINE_JUDGE
    clock_t clock_end = clock();
    HR;
    cout << "Executed In : " << double(clock_end - clock_begin) / CLOCKS_PER_SEC * 1000 << " ms";
    HR;
#endif

    return 0;
}

// Look for int overflow, edge case, n=1? n=0?
// mistakes you did
/*
    uninitialised value usage
    check default value of checker variable
    used x = -1 instead of x == -1. damn.
*/
