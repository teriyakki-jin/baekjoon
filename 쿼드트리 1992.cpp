#include <iostream>

using namespace std;
int arr[65][65];

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
		cout << value;
		return;
	}
	else if(!is_same) {
		cout << '(';
		cmp(x, y, size / 2);
		cmp(x, y + size / 2, size / 2);
		cmp(x+ size / 2, y, size / 2);
		cmp(x+ size / 2, size / 2 + y, size / 2);
		cout << ')';
	}
	

}



int main() {
	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		
		for (int i = 0; i < n; i++) {
			scanf_s("%1d", &arr[j][i]);
			
		}
	}
	cmp(0, 0, n);
	return 0;
}