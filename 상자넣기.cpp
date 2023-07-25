
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	vector<int> dp;
	int N;
	int max =1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		dp.push_back(1);
		for (int j = 0; j < i; j++) {
			if (v[j]<v[i] && dp[j] + 1 > dp[i]) {
				dp[i] = dp[j] + 1;
				if (max < dp[i])
					max = dp[i];
			}
			
		}
	}
	cout << max << endl;
	
	return 0;
}