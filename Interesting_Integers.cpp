#include <bits/stdc++.h>

using namespace std;

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

int main()
{

    vi pre(100001);
    foe(i, 1, 100000)
    {
        int sum = 0;
        int prod = 1;
        int k = i;
        while (k)
        {
            int temp = k % 10;
            k /= 10;
            sum += temp;
            prod *= temp;
        }
        if (prod % sum == 0)
            pre[i] = pre[i - 1] + 1;
        else
            pre[i] = pre[i - 1];
    }

    int t;
    cin >> t;
    fo(tt, 0, t)
    {
        cout << "Case #" << tt + 1 << ": ";
        int a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << endl;
    }

    return 0;
}