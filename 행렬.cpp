#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swit(int i, int j, vector<vector<int>>& v) {
	if (v[i][j] == 0) {
		v[i][j] = 1;
	}
	else
		v[i][j] = 0;
	if (v[i][j + 1] == 0) {
		v[i][j + 1] = 1;
	}
	else
		v[i][j + 1] = 0;
	if (v[i][j + 2] == 0) {
		v[i][j + 2] = 1;
	}
	else
		v[i][j + 2] = 0;

	if (v[i + 1][j] == 0) {
		v[i + 1][j] = 1;
	}
	else
		v[i + 1][j] = 0;
	if (v[i + 1][j + 1] == 0) {
		v[i + 1][j + 1] = 1;
	}
	else
		v[i + 1][j + 1] = 0;
	if (v[i + 1][j + 2] == 0) {
		v[i + 1][j + 2] = 1;
	}
	else
		v[i + 1][j + 2] = 0;

	if (v[i + 2][j] == 0) {
		v[i + 2][j] = 1;
	}
	else
		v[i + 2][j] = 0;
	if (v[i + 2][j + 1] == 0) {
		v[i + 2][j + 1] = 1;
	}
	else
		v[i + 2][j + 1] = 0;
	if (v[i + 2][j + 2] == 0) {
		v[i + 2][j + 2] = 1;
	}
	else
		v[i + 2][j + 2] = 0;

}
int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> v(N);
	vector<vector<int>> v1(N);
	for (int i = 0; i < N; i++) {

		string a;
		cin >> a;
		for (int j = 0; j < a.size(); j++) {
			v[i].push_back(a[j] - '0');

		}


	}
	int x = 0;
	int y = 0;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		for (int j = 0; j < a.size(); j++) {
			v1[i].push_back(a[j] - '0');


		}
	}
	int cnt = 0;
	if (N < 3 || M < 3) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (v[i][j] != v1[i][j]) {
					cout << "-1\n";
					return 0;
				}
				else
					cnt++;



			}
		}
		if (cnt == N * M) {
			cout << "0\n";
			return 0;
		}

		
	}
	

	for (int i = 0; i < N ; i++) {
		for (int j = 0; j < M; j++) {
			
			
			if (cnt > N *M) {
				cout << "-1\n";
				return 0;
			}
			if (v[i][j] != v1[i][j]) {
				if (i >= N - 2||j>=M-2) {
					cout << "-1\n";
					return 0;
				}
				
				cnt++;
				swit(i, j, v);
				i = 0;
				j = 0;
				
			}
			

			
		}




		if (cnt == N * M) {
			cout << "0\n";
			return 0;
		}

	}
	cout << cnt;
	

}