// link :
// soln :
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using indexed_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update> ;
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

struct range{
    int l,r,ind;
    
    bool operator < (const range &other) const{
        if(l == other.l) return r > other.r;
        return l < other.l;
    }
};

void solve()
{
    int n;
    cin >> n;
    
    vector<range> ranges(n);
    vi contained(n), containes(n);
    
    indexed_set<pii> Rb;
    fr(i,0,n-1){
        cin >> ranges[i].l;
        cin >> ranges[i].r;
        ranges[i].ind = i;
    }
    
    sort(all(ranges));
    
    fr(i,0,n-1){
        Rb.insert({ranges[i].r, -1*i});
        contained[ranges[i].ind] = Rb.size() - Rb.order_of_key({ranges[i].r , -1*i}) - 1;
    }
    
    Rb.clear();
    
    rfr(i, n-1, 0){
        Rb.insert({ranges[i].r, -1*i});
        containes[ranges[i].ind] = Rb.order_of_key({ranges[i].r , -1*i});
    }
    
    fr(i, 0, n - 1) cout << containes[i] << " ";
    cout << endl;
    fr(i, 0, n - 1) cout << contained[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}