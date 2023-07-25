#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	vector<int> v;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		v.push_back(t);
		
	}
	
	int cho = 0, day = 0;
	
	for (int i = K; i < N+1; i++) {
		if (K < i && v[i - K-1] < v[i-1]) {
			day++;
			while (v[i - K-1] < v[i-1]) {
				v[i-1]--;
				cho++;
			}
			sort(v.begin(), v.end());
			i--;
		}
		else
			continue;
		
	}
	cout << cho << " " <<  day;
}