#include <iostream>
#include <vector>
#include <algorithm>

int N, M;
using namespace std;

int main() {
	
	cin >> N >> M;
	vector <vector<int>> a(N, vector<int>(M));
	vector <vector<int>> dp(N, vector<int>(M, 10000000));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < M; ++i) {
		dp[0][i] = a[0][i];
	}

	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			for (int k = 0; k < M; ++k) {
				if (j != k) {
					dp[i][j] = min(dp[i][j], dp[i - 1][k] + a[i][j]);
				}
			}
		}
	}

	int minTime = 100000000;
	for (int i = 0; i < M; ++i) {
		minTime = min(minTime, dp[N - 1][i]);
	}

	cout << minTime << endl;

	return 0;
}


/*
int main() {
	int N, M;
	cin >> N >> M;
	int a[501][501];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int t;
			cin >> t;
			a[i][j]= t;
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		int smallest = 10000000;
		int fflag = 0;
		for (int j = 0; j < M; j++) {
			if (smallest > a[i][j] ) smallest = a[i][j];
			fflag = j;
		}
		ans += smallest;
		for (int i = 0; i < N; i++) {
			a[i][fflag] = 1000000;
		}
	}
	cout << ans << "\n";
}
int n, m;
int m1, m2;
int a[501][501];
int v[501][501];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		m1 = m2 = 10001;
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (v[i - 1][j] < m1) m2 = m1, m1 = v[i - 1][j];
			else if (v[i - 1][j] < m2) m2 = v[i - 1][j];
		}

		for (int j = 1; j <= m; j++) {
			if (v[i - 1][j] == m1) v[i][j] = a[i][j] + m2;
			else v[i][j] = a[i][j] + m1;
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
		    cout << v[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 1; i <= m; i++) {
		if (v[n][i] < m1) m1 = v[n][i];
	}
	cout << m1;
}
*/