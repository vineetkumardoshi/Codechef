#include <iostream>
using namespace std;

int max(int A, int B){
	
	if(A > B){
		return A;
	} 
	return B;
	
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
		
		int A,B;
		cin >> A >> B;
		
		cout << max(A,B) << " " << A+B << endl;
		
	}
	
	return 0;
}
