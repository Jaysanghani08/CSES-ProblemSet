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
#define printyes cout <<"YES\n"
#define printno cout <<"NO\n"
#define N 1000000007
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

void solve()
{
    //code here
    ll n,ans=1;
    cin>>n;

    fr(i,1,n){
        ans = (2*ans)%N;
    }

    cout << ans%N <<endl;
    // cout << N/(pow(10,9));
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}