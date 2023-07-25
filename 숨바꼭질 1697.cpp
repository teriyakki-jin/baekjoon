#include <iostream>
#include <queue>

using namespace std;

queue <int> q;

bool visited[100001];
int path[100001];
int K, cnt = 0;


void BFS(int X) {
	visited[X] = true;
	path[X] = 0;
	q.push(X);

	while (!q.empty()) {
		int w = q.front();
		if (w == K) break;
		q.pop();

		if (visited[w + 1] == 0 && w + 1 <= 100000 && w + 1 >= 0) {
			visited[w + 1] = true;
			q.push(w + 1);
			path[w + 1] = path[w] + 1;
		}
		if (visited[w - 1] == 0 && w - 1 >= 0) {
			visited[w - 1] = true;
			q.push(w - 1);
			path[w - 1] = path[w] + 1;
		}
		if (visited[w * 2] == 0 && w * 2 <= 100000 && w * 2 >= 0) {
			visited[w * 2] = true;
			q.push(w * 2);
			path[w * 2] = path[w] + 1;
		}

	}
}


int main() {
	int N;
	cin >> N >> K;
	BFS(N);
	cout << path[K];
}




/*
int find_smallest(int left, int right, int shung) {
	int smallest = 100000;
	if (left <= smallest) {
		smallest = left;
	}
	if (right <= smallest) {
		smallest = right;
	}
	if (shung <= smallest) {
		smallest = shung;
	}
	cout << "smallest : " << K - smallest << '\n';
	return smallest;
}
void finding(int X) {
	
	int left =  X - 1;
	int right = X + 1;
	int shung = 2 * X;
	cnt++;
	int smallest = find_smallest( abs(K - left), abs(K - right), abs(K - shung));
	
	X = K - smallest;
	if (X == K) {
		
		cout << cnt << '\n';
		return ;
	}
	else {
		
		finding(X);
	}

}



int main() {
	int N;
	cin >> N >> K;
	finding(N);
}
*/