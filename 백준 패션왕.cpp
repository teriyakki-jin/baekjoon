#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int T;
		cin >> T;
		map<string, int> m;
		for (int j = 0; j < T; j++) {
			string c1, c2;
			cin >> c1 >> c2;
			m[c2]++;
		}
		int cloth = 1;
		for (auto x : m) {
			cloth *= x.second + 1;
		}
		cout << cloth - 1 << endl;
	}
}
/*
int main(void) {
	vector<pair<string, int>> v;

	int N;
	cin >> N;
	int ans ;
	while (N--) {
		int T;
		ans = 1;
		cin >> T;
		for (int i = 0; i < T; i++) {
			string name, key;
			cin >> name >> key;
			if (v.size() == 0) {
				v.push_back(pair<string, int>(key, 1));
				
			}

			for (int j = 0; j < (int)v.size(); j++) {
				if (v[j].first == key) {
					v[j].second++;
					break;
				}
				if(j==(int)v.size()-1)
					v.push_back(pair<string, int>(key, 0));

			}
		}

		for (int k = 0; k < (int)v.size(); k++) {

			ans *= (v[k].second + 1);
			cout << ans - 1 << endl;

			
		}
	}
}
*/