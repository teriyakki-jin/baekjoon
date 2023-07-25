#include <iostream>

int arr[2200][2200] = {0};
using namespace std;
int cnt[3] = {0};

void cut(int x, int y, int size) {
	bool is_same = true;
	int value = arr[x][y];
	for (int i = y; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (arr[i][j] != value) {
				is_same = false;
				break;
			}
		}
		
	}
	
	if(!is_same) {
			cut(x, y, size / 3);
			cut(x + size / 3, y, size / 3);
			cut(x + (2 * size) / 3, y, size / 3);
			cut(x, y + size / 3, size / 3);
			cut(x, y + (2 * size) / 3, size / 3);
			cut(x + size / 3, y + size / 3, size / 3);
			cut(x + size / 3, y + (2 * size) / 3, size / 3);
			cut(x + (2 * size) / 3, y + size / 3, size / 3);
			cut(x + (2 * size) / 3, y + (2 * size) / 3, size / 3);
	}
	else if (is_same) {
		//cout << value;
		if (value == 0) {

			cnt[1]++;
		}
		else if (value == 1) {

			cnt[2]++;
		}
		else if (value == -1) {

			cnt[0]++;
		}
		return;
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
	
	cut(0, 0, n);
	cout << cnt[0] << '\n';
	cout << cnt[1] << '\n';
	cout << cnt[2] << '\n';
	return 0;

}