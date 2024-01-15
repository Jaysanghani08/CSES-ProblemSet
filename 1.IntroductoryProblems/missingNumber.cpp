#include <iostream>
using namespace std;

int main(){
    long int x;
    cin >> x;
    long int n = x-1;
    long int arr[n];
    

    for(long int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    long long int sum = (x) *(x+1)/2;
    long long int newsum = 0;
    for(long int i =0; i<n; i++){
        newsum = newsum + arr[i];
    }
    cout << sum - newsum;
    return 0;
}