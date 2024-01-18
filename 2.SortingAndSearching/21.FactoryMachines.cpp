// link :
// soln : https://www.youtube.com/watch?v=OmH_BRMOXmg
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
    int n, m;
    cin >> n;
    cin >> m;

    vi machines(n);
    inv(machines);

    ll ans = 1e18;
    ll low = 0;
    ll high = 1e18;

    while(low <= high){
        ll mid = (high + low)/2;

        ll products = 0;
        fr(i,0,n-1){
            products += min((ll)1e9, mid/machines[i]);
        }

        if(products >= m){
            if(mid < ans) ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
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