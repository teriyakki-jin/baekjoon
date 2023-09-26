#include <iostream>
using namespace std;

int gallery[1001][1001];
int r, c;

int main() {

    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char ch;
            cin >> ch;
            if (ch == '.') {
                gallery[i][j] = 1;
            } else {
                gallery[i][j] = 0;
            }
        }
    }
    int answer = 0;

    // 가로로 액자를 걸 수 있는 경우 계산
    for (int i = 1; i < r-1; i++) {
        int cnt = 0;
        for (int j = 1; j < c-1; j++) {
            if (gallery[i][j] == 1 && !gallery[i+1][j]) {
                cnt++;
            } else {
                answer +=  cnt/2; // 액자를 걸 수 있는 경우를 더함
                cnt = 0;
            }
        }
        answer += max(0, cnt/2); // 행의 끝에 남아 있는 경우를 더함

    }
    for (int i = 1; i < r-1; i++) {
        int cnt = 0;
        for (int j = 1; j < c-1; j++) {
            if (gallery[i][j] == 1 && !gallery[i-1][j]) {
                cnt++;
            } else {
                answer +=  cnt/2; // 액자를 걸 수 있는 경우를 더함
                cnt = 0;
            }
        }
        answer += max(0, cnt/2); // 행의 끝에 남아 있는 경우를 더함

    }

    // 세로로 액자를 걸 수 있는 경우 계산
    for (int j = 1; j < c-1; j++) {
        int cnt = 0;
        for (int i = 1; i < r-1; i++) {
            if (gallery[i][j] == 1 && !gallery[i][j+1]) {
                cnt++;
            } else {
                answer += cnt/2; // 액자를 걸 수 있는 경우를 더함
                cnt = 0;
            }
        }
        answer += max(0, cnt/2); // 열의 끝에 남아 있는 경우를 더함
    }
    for (int j = 1; j < c-1; j++) {
        int cnt = 0;
        for (int i = 1; i < r-1; i++) {
            if (gallery[i][j] == 1 && !gallery[i][j-1]) {
                cnt++;
            } else {
                answer += cnt/2; // 액자를 걸 수 있는 경우를 더함
                cnt = 0;
            }
        }
        answer += max(0, cnt/2); // 열의 끝에 남아 있는 경우를 더함
    }

    cout << answer << endl;
    return 0;
}
