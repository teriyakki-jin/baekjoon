#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack <char> st;
	stack <char> l;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		st.push(s[i]);
		
	}

	int n;
	int whoak = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char M;
		cin >> M;
		if (M == 'L') {
			if (st.empty()) {
				continue;
			}
			else {
				l.push(st.top());
				st.pop();
			}

		}
		else if (M == 'D') {
			if (l.empty()) {
				continue;
			}
			else {
			//	cout << "D : " << l.top();
				st.push(l.top());
				l.pop();
			}
		}

		else if (M == 'P')
		{
			char a;
			cin >> a;
			st.push(a);
		}

		else if (M == 'B') {

			if (st.empty()) {
				continue;
			}
			else {
				st.pop();
			}
			


		}
	}

	while (!st.empty()) {
		l.push(st.top());
		//cout <<"st : " << st.top() << "\n";
		st.pop();
	}
	
	
	while(!l.empty()) {
		cout << l.top();
		l.pop();
	}

}