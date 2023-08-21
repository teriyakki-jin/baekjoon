#include <iostream>

using namespace std;

int arr[1000001];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
			arr[start]++;
			arr[end+1]--;
	}
	for (int i = 1; i < 1000001; i++) {
		arr[i] += arr[i - 1];
	}

	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int tmp;
		cin >> tmp;
		cout << arr[tmp] << "\n";
	}
	return 0;


}