#include <iostream>
#include <stack>
#include <vector>
#include <iomanip>
using namespace std;


int main() {
	int N;
	vector <double> v;
	
	string str;
	cin >> N;
	cin >> str;
	
	stack <double> s;
	for (int i = 0; i < N; i++) {
		double t;
		cin >> t;

		v.push_back(t);

	}
	for (int i = 0; i < str.length(); i++) {
		
		if (str[i] >= 'A' && str[i] <= 'Z') {
			s.push(v[str[i] - 'A']);
		}
		
		else {
			double ans = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			if (str[i] == '*')
				ans = ans * b;
			else if (str[i] == '+')
				ans = ans + b;
			else if (str[i] == '-')
				ans = b - ans;
			else if (str[i] == '/')
				ans =  b / ans;
			
			s.push(ans);
			
		}
	}
	cout << fixed;
	cout << setprecision(2);
	cout << s.top();
	return 0;

}