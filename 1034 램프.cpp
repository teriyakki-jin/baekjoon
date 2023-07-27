#include <iostream>
#include<string>
using namespace std;

string arr[51];
int ret = 0;
int n, m, k;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        int z = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '0') z++;
        }

        if (z <= k && k % 2 == z % 2) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) cnt++;
            }
            ret = max(ret, cnt);
        }
    }
    cout << ret << "\n";
    return 0;
}