#include <iostream>
#include <vector>
using namespace std;

int main() {
	int K, N;
	long long sum = 0;
	long long judge = 0;
	cin >> K >> N;
	vector <int> v;
	for (int i = 0; i < K; i++) {
		int t;
		cin >> t;
		v.push_back(t);
		sum += t;
	}
	
	judge = sum / N;
	while (true) {
		int summary = 0;
		for (int i = 0; i < K; i++) {
			summary += v[i] / judge;
		}
		if (summary == N) {
			cout << judge;
			break;
		}
		judge--;
			
	}
	


}