//#include <iostream>
//using namespace std;
//
//
//
//bool stair(long long i) {
//	while (i != 0) {
//		int t1 = i % 10;
//		int t2 = i / 10 - (i / 100) * 10;
//		if (i < 10) return true;
//		if (t1 >= t2) return false;
//		else if (t1 < t2) i /= 10;
//	}
//	return true;
//}
//
//
//int main() {
//
//	int t;
//	cin >> t;
//	int dp[t + 1];
//	int cnt = 0;
//	if (t < 10) {
//		cout << t; return 0;
//	}
//	for (long long i = 0; i < 1000000000; i++) {
//		if (i < 10) cnt++;
//		else {
//
//			if (stair(i)) cnt++;
//		}
//		if (cnt == t) {
//			cout << i;
//			break;
//		}
//
//	}
//	return 0;
//}
//
//
#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000000;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> dp(N + 1, vector<int>(10, 0));

    // 초기값 설정
    for (int i = 1; i <= 9; ++i) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; ++i) {
        for (int j = 0; j <= 9; ++j) {
            if (j - 1 >= 0) {
                dp[i][j] += dp[i - 1][j - 1];
                dp[i][j] %= MOD;
            }
            if (j + 1 <= 9) {
                dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] %= MOD;
            }
        }
    }

    int answer = 0;
    for (int i = 0; i <= 9; ++i) {
        answer += dp[N][i];
        answer %= MOD;
    }

    cout << answer << endl;

    return 0;
}

