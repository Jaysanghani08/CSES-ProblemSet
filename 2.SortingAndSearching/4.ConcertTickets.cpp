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
#define printy cout<<"YES";
#define printn cout<<"NO"<<"endl";
#define print(var) cout<<var<<"endl";
#define printv(v) for(auto i:v){cout<<i<<" ";}cout<<"endl";
// clang-format on

void solve()
{
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;

    fr(i, 0, n - 1)
    {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    fr(i, 0, m - 1)
    {
        int t;
        cin >> t;

        auto it = tickets.upper_bound(t);

        // smaller then price of each ticket, no ticket can be given to hin
        if (it == tickets.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *(--it) << endl;
            tickets.erase(it);
        }
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