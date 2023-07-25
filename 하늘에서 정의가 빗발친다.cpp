#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair <double, int>> v;
	for (int i = 1; i <= N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		double d;
		d = sqrt(pow(a, 2) + pow(b, 2));
		double time = d / (double)c;
		v.push_back(make_pair(time, i + 1));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << endl;
	}
	
}