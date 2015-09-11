#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,t;
    cin>>t;
    for(int J = 1; J <= t; J++){
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int a,b;
            cin >> a >> b;
            ans ^= i; 
        }
        cout << ans <<endl;
    }
    return 0;
}