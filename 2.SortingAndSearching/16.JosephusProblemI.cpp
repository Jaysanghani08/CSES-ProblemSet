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

    vi v(n);
    fr(i, 0, n - 1) v[i] = i + 1;

    while (v.size() > 1)
    {
        vi tmp;

        fr(i, 0, v.size() - 1)
        {

            // print all the even position elements (2, 4, 6 , ...)
            // here, (1, 3, 5.. ) since it is 0 based indexing
            if (i % 2 == 1)
                cout << v[i] << " ";
            else
                tmp.pb(v[i]); // odd position will be skipped
        }

        // starting point is same if size of v is even
        if (v.size() % 2 == 0)
            v = tmp;

        // if odd, then starting point will be the last element of tmp/v
        else
        {
            int starting = tmp.back();
            tmp.pop_back();
            v.clear();
            v.pb(starting);
            fr(j, 0, tmp.size() - 1) v.pb(tmp[j]);
        }
    }

    // one element will not print
    cout << v[0] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}