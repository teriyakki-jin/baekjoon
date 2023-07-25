#include <iostream>

using namespace std;

int main() {
	long long N;
	cin >> N;
	long long result = N;
	
	while (--N) {
		result = result * N;
		result %= 10000000;
	
		while (result % 10 == 0)
			result = result / 10;
		
		
	}
	cout << result % 10 << endl;
}