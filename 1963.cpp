#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int prime_number[10001];
int test_case;
int check[10001];

typedef struct qu {
    int num;
    int cnt;
} qu;

void find_prime_number() {
    for (int i = 2; i <= 9999; i++) {
        prime_number[i] = 1;
    }
    for (int i = 2; i <= sqrt(9999); i++) {
        if (prime_number[i] == 0) continue;
        for (int j = i * i; j <= 9999; j += i) {
            prime_number[j] = 0;
        }
    }
}

void bfs(int start, int finish) {
    int answer = -1;
    check[start] = 1;
    queue<qu> q;
    q.push({ start, 0 });

    while (!q.empty()) {
        int num = q.front().num;
        int cnt = q.front().cnt;

        if (num == finish) {
            answer = cnt;
            break;
        }

        q.pop();
        int num1 = num - num % 10;
        int num2 = num - num % 100 + num % 10;
        int num3 = num - num % 1000 + num % 100;
        int num4 = num % 1000;

        for (int i = 0; i <= 9; i++) {
            int num_1 = num1 + 1 * i;
            int num_2 = num2 + 10 * i;
            int num_3 = num3 + 100 * i;
            int num_4 = num4 + 1000 * i;

            if (num_1 >= 1000 && check[num_1] == 0 && prime_number[num_1] == 1) {
                check[num_1] = 1;
                q.push({ num_1, cnt + 1 });
            }
            if (num_2 >= 1000 && check[num_2] == 0 && prime_number[num_2] == 1) {
                check[num_2] = 1;
                q.push({ num_2, cnt + 1 });
            }
            if (num_3 >= 1000 && check[num_3] == 0 && prime_number[num_3] == 1) {
                check[num_3] = 1;
                q.push({ num_3, cnt + 1 });
            }
            if (num_4 >= 1000 && check[num_4] == 0 && prime_number[num_4] == 1) {
                check[num_4] = 1;
                q.push({ num_4, cnt + 1 });
            }
        }
    }

    if (answer == -1)
        cout << "Impossible" << "\n";
    else
        cout << answer << "\n";
}

void solve(int start, int finish) {
    memset(check, 0, sizeof(check));
    bfs(start, finish);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    find_prime_number();
    cin >> test_case;

    for (int k = 0; k < test_case; k++) {
        int N, M;
        cin >> N >> M;
        solve(N, M);
    }

    return 0;
}
