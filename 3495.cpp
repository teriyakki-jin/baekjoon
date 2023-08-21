#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> arr(h);
    for (int i = 0; i < h; i++) {
        cin >> arr[i];
    }

    int dot = 0, slash = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (arr[i][j] == '\\' || arr[i][j] == '/') {
                slash++;
            }

            if (slash % 2 == 1) {
                if (arr[i][j] == '.') {
                    dot++;
                }
            }
        }
    }

    cout << (slash / 2) + dot;

    return 0;
}
