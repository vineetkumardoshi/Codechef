#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
		
		int mega = 2048;
		int p,count = 0;
		cin >> p;
		
		while(mega > 0){
			if(p >= mega){
				count ++;
				p = p - mega; 
			}
			else{
				mega /= 2;
			}
		}
		cout << count << endl;
	}
	return 0;
}
