// link :
// soln :
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i, s, e) for (long long int i = s; i <= e; ++i)
#define rfr(i, s, e) for (long long int i = s; i >= e; --i)
#define trav(item, x) for (auto &item : x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define endl "\n"

void solve()
{
    // code here
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(n), b(m);
    fr(i,0,n-1) cin >> a[i];
    fr(i,0,m-1) cin >> b[i];

    sort(all(a));
    sort(all(b));
    int cnt = 0;
    int i=0, j=0;

    while(i < n and j < m){
        if(abs(a[i] - b[j]) <= k){
            i++, j++, cnt++;
        }
        else{
            if(a[i]-b[j] > k) j++;
            else i++;
        }
    }
    
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}