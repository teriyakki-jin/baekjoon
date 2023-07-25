#include <iostream>
using namespace std;
int map[50][50];
bool visit[50][50];

void DFS(int x, int y) {
	visit[x][y] = 1;
	if (map[x + 1][y] && !visit[x + 1][y]) DFS(x + 1, y);
	if (map[x - 1][y] && !visit[x - 1][y]) DFS(x - 1, y);
	if (map[x][y + 1] && !visit[x][y + 1]) DFS(x, y + 1);
	if (map[x][y - 1] && !visit[x][y - 1]) DFS(x, y - 1);
}
int main(void) {
	
	
	int T;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		int M, N, K;
		cin >> M >> N >> K;
		int cnt = 0;
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				map[j][k] = 0;
				visit[j][k] = true;
			}
		}
		for (int j = 0; j < K; j++) {
			int X, Y;
			cin >> X >> Y;
			map[X][Y] = 1;
			visit[X][Y] = false;
			//cout << map[X][Y] << endl;
		}
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				if (map[j][k] && !visit[j][k]) {
					DFS(j, k);
					cnt++;
				}
			}
		}


		
		
		cout << cnt << endl;
	}
		
}
