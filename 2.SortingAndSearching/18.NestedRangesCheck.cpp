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

struct range
{
    int l, r, ind;

    bool operator<(const range &other) const
    {
        if (l == other.l)
            return r > other.r;
        return l < other.l;
    }
};

void solve()
{
    int n;
    cin >> n;

    vector<range> v(n);
    fr(i, 0, n - 1)
    {
        cin >> v[i].l;
        cin >> v[i].r;
        v[i].ind = i;
    }

    // sort by left boundary, if equal left boundary, then out whichever is larger on the top
    // 1---------6
    //   2----4
    //     3-----6
    //        4--------8

    sort(all(v));

    // if any range is contained insinde another, the right of that range should be <= the max right boundary of prev. ramges
    int maxRB = 0, minRB = INT_MAX;
    vector<bool> contained(n), containes(n);

    fr(i, 0, n - 1)
    {
        if (v[i].r <= maxRB)
        {
            contained[v[i].ind] = true;
        }

        maxRB = max(maxRB, v[i].r);
    }

    // if any range containes another, the right of that range should be >= the min right boundary of all the ranges after that range
    rfr(i, n - 1, 0)
    {
        if (v[i].r >= minRB)
        {
            containes[v[i].ind] = true;
        }
        minRB = min(minRB, v[i].r);
    }

    fr(i, 0, n - 1) cout << (containes[i] && true) << " ";
    cout << endl;
    fr(i, 0, n - 1) cout << (contained[i] && true) << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}