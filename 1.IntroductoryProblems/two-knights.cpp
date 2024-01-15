// If two knight attack each other then they will be in 2*3 rectangle or 3*2 rectangle. So the number of ways of placing them is (n-1)*(n-2)+(n-2)*(n-1). Also in each rectangle no ways of placing the knight is 2. So total ways of placing knight so that they attack each other will be 2*2*(n-1)*(n-2). So the number of ways such that knight do not attack each other will be n*n*(n*n-1)/2 — 4*(n-1)*(n-2)


#include<iostream>
using namespace std;
int main()
{
    long long int n,i=1;
    cin >> n;
    for(i=1; i<=n; i++){
        long long int total = ((i*i)*((i*i)-1))/2;  // nC2
        long long int combo_to_remove = 2*2*(i-1)*(i-2); // number of 2x3 and 3x2 boxes on whole chessboard and there are 2 combos which aren't possible combinations in each 2x3 or 3x2
        cout << total - combo_to_remove << endl;
    }
    
    return 0;
}