// link :
// soln :
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int> > vvi;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef set<int> si;
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i, s, e) for (int i = s; i <= e; ++i)
#define rfr(i, s, e) for (int i = s; i >= e; --i)
#define trav(item, x) for (auto &item : x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define printy cout << "YES\n";
#define printn cout << "NO\n";
#define print(var) cout << var << "\n";
#define printv(v)         \
    for (auto i : v)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << "\n";
#define inv(v)        \
    for (auto &i : v) \
    {                 \
        cin >> i;     \
    }
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;

    vi v(n);
    inv(v);

    sort(all(v));
    int j = n - 1, i = 0;
    int ans = 0;
    vector<bool> isAdded(n, false);
    while (i < j)
    {
        if (v[i] + v[j] > x)
            j--;
        else
        {
            ans++;
            isAdded[i] = isAdded[j] = true;
            i++, j--;
        }
    }

    fr(i, 0, n - 1)
    {
        ans += (!isAdded[i]);
    }

    print(ans);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}