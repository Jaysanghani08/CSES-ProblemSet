//link : 
//soln : https://www.technicalkeeda.in/2020/10/count-trailing-zeros-in-n-factorial.html
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
 
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

void solve()
{
    //code here
    ll n,i=5,res=0;
    cin >>n;

    while(n/i > 0){
        res+=n/i;
        i=i*5;
    }

    cout <<res<<endl;
 
}
 
 //5,6,7,8,9 ->1 , 10,11,12,13,14 -> 2, 15,16,17,18,19->3, 20,21,22,23,24->4
 
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