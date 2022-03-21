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

// Policy Based Data Structures
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;



string temp;

bool isPalin(int lo, int hi)
{
    string s;
    foe(i, lo, hi) s.pb(temp[i]);
    string s1 = s;
    reverse(all(s1));
    if (s == s1)
        return true;
    else
        return false;
}

int main()
{

    int t;
    cin >> t;
    fo(tt, 0, t)
    {
        cout << "Case #" << tt + 1 << ": ";
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi pos;
        fo(i, 0, n) if (s[i] == '?') pos.pb(i);
        bool flag = false;
        fo(i, 0, (1 << pos.size()))
        {
            fo(j, 0, pos.size())
            {
                if (i & (1 << j))
                    s[pos[j]] = '1';
                else
                    s[pos[j]] = '0';
            }
            temp = s;
            // size 5
            bool f5 = false, f6 = false;
            for (int i = 0; i + 4 < n; i++)
            {
                if (isPalin(i, i + 4))
                    f5 = true;
            }
            for (int i = 0; i + 5 < n; i++)
            {
                if (isPalin(i, i + 5))
                    f6 = true;
            }
            if (!f5 && !f6)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}