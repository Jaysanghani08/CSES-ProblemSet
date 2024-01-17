// link :
// soln :
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
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
// clang-format off
#define inv(v) for(auto &i:v){cin>>i;}
#define endl "\n"
#define printy cout<<"YES\n";
#define printn cout<<"NO\n";
#define print(var) cout<<var<<"\n";
#define printv(v) for(auto i:v){cout<<i<<" ";}cout<<"\n";
// clang-format on

void solve()
{
    // code here
    int n, q, ans = 1;
    cin >> n >> q;

    vi v(n + 1), index(n + 1);
    fr(i, 1, n)
    {
        cin >> v[i];
        index[v[i]] = i;
    }

    fr(i, 1, n - 1)
    {
        ans += (index[i] > index[i + 1]);
    }

    set<pii> s;
    int l, r;
    while (q--)
    {
        cin >> l >> r;

        // add adjecent values to set
        if (v[l] + 1 <= n)
        {
            s.insert(mp(v[l], v[l] + 1));
        }
        if (v[r] + 1 <= n)
        {
            s.insert(mp(v[r], v[r] + 1));
        }
        if (v[l] - 1 >= 1)
        {
            s.insert(mp(v[l] - 1, v[l]));
        }
        if (v[r] - 1 >= 1)
        {
            s.insert(mp(v[r] - 1, v[r]));
        }

        // remove previous inversions between these pairs
        for (auto it : s)
        {
            if (index[it.first] > index[it.second])
                ans--;
        }

        // swap them and update indices
        swap(v[l], v[r]);
        index[v[l]] = l;
        index[v[r]] = r;

        // check if any new inversions are added
        for (auto it : s)
        {
            if (index[it.first] > index[it.second])
                ans++;
        }

        print(ans);
        s.clear();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}