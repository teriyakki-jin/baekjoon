#include <iostream>


using namespace std;

int path[1001];

int v[1001];

int main() {
	int N;
	cin >> N;
	
	for (int i = 1; i < N; i++) {
		int t;
		cin >> t;
		v[i] = t;
	}


	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			if (path[j - 1] == 0) continue;
			if (path[j - 1] >= v[i]) path[j] = max(path[j], path[j - 1] + v[i]);
		}
		path[1] = max(path[1], v[i]);
	}
	for (int i = N; i > 0; i--) {
		if (path[i]) {
			cout << i;
			break;
		}
	}
	
}