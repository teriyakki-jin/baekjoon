#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector <vector<string>> strSet(10001);
    hash<string> str_hash;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        size_t idx = str_hash(str)%10001;
        strSet[idx].push_back(str);
    } 

    int cnt = 0;
    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        size_t idx = str_hash(str)%10001;
        for (int j = 0; j < strSet[idx].size(); j++) {
            if (strSet[idx][j] == str) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}