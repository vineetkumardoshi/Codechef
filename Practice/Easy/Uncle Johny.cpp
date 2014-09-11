#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T -- ){
		
		int N;
		cin >> N;
		
		vector<int> A(N);
		
		int K;
		
		for(int i = 0; i < N; i++){
			
			cin >> A[i];
			
		}
		
		cin >> K;
		int pos = 1;
		for(int i = 0; i < N; i++){
			
			if(A[K-1] > A[i]){
				pos++;
			}
			
		}
		cout << pos << endl;
	}
	return 0;
}
