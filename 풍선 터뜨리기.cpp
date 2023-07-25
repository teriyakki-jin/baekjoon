#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	deque <int> dq;
	vector <int> v;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		dq.push_back(t);
		v.push_back(t);
	}
	
	while(!dq.empty()) {
		int z = dq.front();
		dq.pop_front();
		vector<int>::iterator iter = find(v.begin(), v.end(), z);
		int index = distance(v.begin(), iter);
		cout << index + 1 << " ";
		if (!dq.empty()) {
			if (z > 0) {
				z = z - 1;
				while(z--) {
					dq.push_back(dq.front());
					dq.pop_front();
				}
			}
			else 
				while(z++) {
					dq.push_front(dq.back());
					dq.pop_back();
				}
		
		}
		
	}
	return 0;
}