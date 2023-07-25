#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	int N;
	cin >> N;
	int ith;
	for (int i = 0; i < N; i++) {
		float sosu;
		cin >> sosu;
		v.push_back(sosu);

	}
	for (int i = 1; i < 1001; i++) {
		int cnt = 0;
		for (int j = 1; j < i; j++) {

			if (int(int(i * j) / i * 1000) / 1000 == j or int((int(i * j) + 1) / i * 1000) / 1000 == j)
				cnt++;

		}
		if (cnt == N) {
			ith = i;
			break;
		}

	}
	cout << ith << endl;
	 
	return 0;
}