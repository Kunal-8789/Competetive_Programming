#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

/* ============================= (Debug) ============================*/
#define sim template <class c
#define LOCAL
#define ris return *this
#define dor > debug &operator<<
#define eni(x)                                                                    \
    sim > typename enable_if<sizeof dud<c>(0) x 1, debug &>::type operator<<(c i) \
    {
sim > struct rge
{
    c b, e;
};
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug
{
#ifdef LOCAL
    eni(!=) cerr << boolalpha << i;
    ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d) { ris << "(" << d.first << ", " << d.second << ")"; }
sim dor(rge<c> d)
{
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
    sim dor(const c &)
    {
        ris;
    }
#endif
}
;
vector<char *> tokenizer(const char *args)
{
    char *token = new char[111];
    strcpy(token, args);
    token = strtok(token, ", ");
    vector<char *> v({token});
    while (token = strtok(NULL, ", "))
        v.push_back(token);
    return reverse(v.begin(), v.end()), v;
}
void debugg(vector<char *> args) {}
template <typename Head, typename... Tail>
void debugg(vector<char *> args, Head H, Tail... T)
{
    debug() << "   " << args.back() << ": " << H;
    args.pop_back();
    debugg(args, T...);
}
#define harg(...) #__VA_ARGS__
#ifdef LOCAL
#define dbg(...)                                                             \
    {                                                                        \
        debugg(tokenizer(harg(__VA_ARGS__, --Line)), __VA_ARGS__, __LINE__); \
        cerr << endl;                                                        \
    }
#else
#define dbg(...) \
    {            \
    }
#endif
///* =================================================================== *///

#define F first
#define S second
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define int long long
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define pst(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const int N = 3e5;
// vi v;
int a[N];

/* ========== YOUR CODE HERE ========= */
void solution()
{
    int i, j, k, n, m, ans = 0, e = 0, o = 0;
    cin >> n;
    vi v(n);
    fo(i, n)
    {
        cin >> v[i];
        if (i != 0 and i != n - 1)
        {
           if (v[i] & 1)
            {
                ans += (v[i] + 1) / 2;
            }
            else
            {
                ans += v[i] / 2;
            }
        }
    }
    int sum = accumulate(all(v), 0);
    sum -= v[0] + v[n - 1];
    if (sum == n - 2 or (n - 2 == 1 and sum & 1))
    {
        cout << -1 << endl;
        return;
    }
  
    cout << ans << endl;
}
/* ========== YOUR CODE HERE ========= */

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
}