#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ff first
#define endl '\n'
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define fo(i, a, b) for (int i = a; i < b; i++)
#define foe(i, a, b) for (int i = a; i <= b; i++)

const int MOD1 = 998244353;
const int MOD = 1000000007;
#define INF 1e18
#define PI 3.141592653589793238462

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef long double lld;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef unsigned long long ull;

//Policy Based Data Structures
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//Debugging
#ifdef divyansh_0602
#define debug(x) cerr << #x << ": "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif

//Primitive data types
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(double t) {cerr << t;}

//Complex data types
template <class T> void _print(set <T> v);
template <class T> void _print(vector <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifdef divyansh_0602
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
}

void solve()
{
    int n; cin>>n;
    vi odd;
    vi even;
    ll sumPos=0;
    ll sumNeg=0;
    fo(i,0,n)
    {
        int x; cin>>x;
        x = abs(x);
        if(i%2==0)
        {
            even.pb(x);
            sumPos += x;
        }
        else 
        {
            odd.pb(x);
            sumNeg += x;
        }
    }
    
    sort(all(odd));
    sort(all(even));
    ll ans = sumPos- sumNeg;
    if(even[0] >= odd.back()) 
    {
        cout<<ans<<endl;
        return;
    }
    else 
    {
        ll diff = odd.back() - even[0];
        ans += 2*diff;
        cout<<ans<<endl;
    }
}

int main()
{
    init_code();

    int t; cin>>t;
    while(t--) solve();

    return 0;
}