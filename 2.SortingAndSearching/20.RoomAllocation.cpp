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

    vector<pair<pii, int> > v(n); // {arrival, departure, index}
    fr(i, 0, n - 1)
    {
        cin >> v[i].first.first;
        cin >> v[i].first.second;
        v[i].second = i;
    }

    sort(all(v));
    priority_queue<pii, vector<pii>, greater<pii> > pq; // {departureTime, roomNo}
    vi ans(n, -1);
    int roomNo = 1;

    fr(i, 0, n - 1)
    {
        // if no rooms allocated yet
        // or if min departure time of prev. customer is >= arrival time of this customer
        // then assign new room and push it to pq.
        if (pq.size() == 0 || pq.top().first >= v[i].first.first)
        {
            ans[v[i].second] = roomNo;
            pq.push(mp(v[i].first.second, roomNo));
            roomNo++;
        }
        else{
            ans[v[i].second] = pq.top().second;    // give the room from top of pq ( min dep. time )
            auto tmp = pq.top();
            pq.pop();   // pop pair with minDepTime
            pq.push(mp(v[i].first.second, tmp.second));   // push {depTime, roomAllocatedToMin}
        }
    }

    print(roomNo-1);
    fr(i,0,n-1) cout << ans[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}