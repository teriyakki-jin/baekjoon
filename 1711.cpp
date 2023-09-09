#include <iostream>
#include <vector>
using namespace std;
vector<pair<long long, long long>> v;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        long long x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            long long x1 = v[i].first, y1 = v[i].second;
            long long x2 = v[j].first, y2 = v[j].second;

            long long dx = x2 - x1;
            long long dy = y2 - y1;

            long long a = dx * dx + dy * dy;

            for (int t = j + 1; t < N; t++) {
                long long x3 = v[t].first, y3 = v[t].second;

                long long dx1 = x3 - x1;
                long long dy1 = y3 - y1;
                long long dx2 = x3 - x2;
                long long dy2 = y3 - y2;

                long long b = dx1 * dx1 + dy1 * dy1;
                long long c = dx2 * dx2 + dy2 * dy2;

                if(a==b+c||b==a+c||c==a+b) cnt++;

            }
        }
    }

    cout << cnt << endl;
    return 0;
}
