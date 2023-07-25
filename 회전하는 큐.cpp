#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	int N, M,t;
	int q = 0;
	int cnt = 0;
	deque <int> dq;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	vector <int> v;
	for (int i = 0; i < M;i++) {
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i] == dq[j]) {
				q = j;
				//cout << q << endl;
				break;

			}
		}
		if (q <= dq.size() / 2) {
			for (int j = 0; j < q; j++) {
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
			dq.pop_front();
		}
		else
		{
			for (int j = 0; j < dq.size() - q; j++) {
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
			dq.pop_front();
		}
	}
	cout << cnt;
}