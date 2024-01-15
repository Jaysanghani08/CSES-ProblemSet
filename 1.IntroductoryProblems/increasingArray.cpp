
#include <iostream>
using namespace std;

int main(){
    long long n, d=0, cnt=0;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;++i){
        int d=0;
        if(arr[i+1] < arr[i]){
            d = arr[i] - arr[i+1];
            arr[i+1] = arr[i];
            cnt = cnt + d; 
        }
    }

    cout << cnt << endl;
}