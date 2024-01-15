//link : 
//soln : 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i,s,e) for(long long int i = s; i<=e; ++i)
#define rfr(i,s,e) for(long long int i = s; i>=e; --i)
#define trav(item, x) for(auto& item:x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define endl "\n"

void solve(int n, int from, int to, int with, vector<pair<int, int > > &ans)
{
    if(n == 0) return;

    solve(n-1, from, with, to, ans);
    ans.pb(mp(from, to));
    solve(n-1, with, to, from, ans);
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int > > ans;
    solve(n, 1, 3, 2, ans);

    cout << ans.size() << endl;
    for(auto it : ans){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}