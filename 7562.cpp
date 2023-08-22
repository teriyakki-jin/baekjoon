#include <iostream>
#include <queue>
using namespace std;

const int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
const int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int visit[301][301];
int bfs(int s1, int s2, int e1, int e2, int l) {
    queue<pair<int, int>> q;
    q.push(make_pair(s1, s2));
    visit[s1][s2] = 0;  // 시작 지점의 거리는 0으로 초기화

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == e1 && y == e2) {
            return visit[x][y];  // 목표 지점에 도착한 경우 거리를 반환
        }

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < l && ny >= 0 && ny < l && visit[nx][ny] == -1) {
                q.push(make_pair(nx, ny));
                visit[nx][ny] = visit[x][y] + 1;  // 다음 위치의 거리를 현재 위치 + 1로 갱신
                //cout << nx << ny << endl;
            }
        }
    }

    return -1;  // 목표 지점에 도착하지 못한 경우
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int l;
        cin >> l;
        int s1, s2, e1, e2;
        cin >> s1 >> s2;
        cin >> e1 >> e2;

        // visit 배열 초기화
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < l; k++) {
                visit[j][k] = -1;
            }
        }

        int result = bfs(s1, s2, e1, e2, l);
        cout << result << endl;
    }

    return 0;
}
