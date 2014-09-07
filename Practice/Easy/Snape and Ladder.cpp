#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
		
		int B,LS;
		cin >> B >> LS;
		
		cout <<sqrt(abs(B*B - LS*LS))<< " " << sqrt(B*B + LS*LS) << endl;
	}	
				
	return 0;
}
