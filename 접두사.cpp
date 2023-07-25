#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector <string> v;
	for (int i = 0; i < N; i++) {
		string t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	int count = 1;
	for (int i = 0; i < v.size()-1; i++) {
		if (v[i].size() <= v[i + 1].size()) {
			string str = v[i + 1].substr(0, v[i].size());
			//cout << str << endl;
			if (!v[i].compare(str))
				continue;
		}
		count++;
	}
	cout << count << endl;
	return 0;
}