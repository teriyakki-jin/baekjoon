#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N,M;
	vector<int> container;
	vector<int> box;
	cin >> N;
	while (N--) {
		int t;
		cin >> t;
		container.push_back(t);
	}
	sort(container.begin(), container.end());
	cin >> M;
	while (M--) {
		int x;
		cin >> x;
		box.push_back(x);
	}
	sort(box.begin(), box.end());
	
	while (!box.empty()) {
		for (int i = N - 1; i >= 0; i--) {
			for (int j = i; j >= 0; j--) {
				
			}
		}
	}
}