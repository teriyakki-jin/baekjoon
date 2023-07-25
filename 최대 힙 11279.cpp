#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	priority_queue <int > pq;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t == 0) {
			if (pq.empty()) {
				cout <<" \n 출력 " <<  0 << "\n";
			}
			else {
				cout << " \n 출력 " <<  pq.top() << "\n";
				pq.pop();
			}
		}
		else
			pq.push(t);
	}
	
}