#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {
	int N;
	cin >> N;
	vector<string> v;
	vector<string>::iterator it;
	for (int i = 0; i < N; i++) {
		string t;
		cin >> t;

		it = find(v.begin(), v.end(), t);
		if (it == v.end())
			v.push_back(t);
		else
			continue;
				
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
	{
		
		cout << v[i] << endl;
	}

}