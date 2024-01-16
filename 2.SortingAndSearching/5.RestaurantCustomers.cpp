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

    int n;
    cin >> n;

    vector<pii> v;
    fr(i, 0, n - 1)
    {
        int t1, t2;
        cin >> t1 >> t2;

        v.pb(mp(t1, 1)); // person enters
        v.pb(mp(t2, 0)); // person leaves
    }

    sort(all(v));
    int cnt = 0, ans = 0;

    for (auto it : v)
    {
        if (it.second == 1) // if enters, cnt++
            cnt++;
        else // if leaves, cnt--;
            cnt--;

        ans = max(ans, cnt);
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