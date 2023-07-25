#include <iostream>

using namespace std;

int arr[500][500];
int cnt[2];
void cmp(int x, int y, int size) {
	int value = arr[x][y];
	bool is_same = true;
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (arr[i][j] != value) {
				is_same = false;
				break;
			}
		}
	}
	if (is_same) {
		if (value == 0) {
			cnt[0]++;
		}
		else
			cnt[1]++;
		return;
	}
	else if (!is_same) {
		
		cmp(x, y, size / 2);
		cmp(x, y + size / 2, size / 2);
		cmp(x + size / 2, y, size / 2);
		cmp(x + size / 2, size / 2 + y, size / 2);
			}


}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t;
			cin >> t;
			arr[i][j] = t;
		}
	}
	cmp(0, 0, n);
	cout << cnt[0] << endl;
	cout << cnt[1] << endl;
}