#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> schedule(n);
    for (int i = 0; i < n; i++) {
        cin >> schedule[i].second >> schedule[i].first;
    }

    sort(schedule.begin(), schedule.end());

    priority_queue<int> pq;
    pq.push(schedule[0].first);

    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (schedule[i].second >= pq.top()) {
            pq.pop();
            pq.push(schedule[i].first);
        }
        else {
            cnt++;
            pq.push(schedule[i].first);
        }
    }

    cout << pq.size() << '\n';

    return 0;
}