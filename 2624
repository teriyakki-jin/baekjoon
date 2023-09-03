#include <iostream>
#include <vector>

using namespace std;


long long dp[10001];
// i + j
int main() {
    int T, k;
    cin >> T;
    cin >> k;
    vector<int> value; // (동전금액, 개수);
    vector<int> cnt;
    for (int i = 0; i < k; i++) {
        int p, n;
        cin >> p >> n;
        value.push_back(p);
        cnt.push_back(n);
    }
    dp[0] = 1;


           for(int i = 0 ; i < k;i++){
                    int coinvalue = value[i];
                    int coincnt = cnt[i];
                    for(int j = T; j >=0;j--){
                        for(int cnt = 1; cnt <=coincnt;cnt++){
                            int val = coinvalue * cnt;
                            if(j>=val){
                                dp[j] += dp[j-val];
                            }
                        }
                    }


        }

    for(int i = 1; i < T;i++){
       cout << i << " " <<dp[i] << endl;
    }
    cout << dp[T] << endl;
    return 0;
}
