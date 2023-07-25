#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{

	int N;
	cin >> N;
	list <char> ::iterator it;
	list <char> password;
	string str;

	for (int i = 0; i < N; ++i) {
		cin >> str;
		password.clear();
		it = password.begin();
		
		for (int j = 0; j < str.length(); ++j) {
			

			if (str[j] == '<') {
				if (it != password.begin()) it--;
			}
			else if (str[j] == '>') {
				if(it!=password.end()) it++;
			}
			else if (str[j] == '-') {
				if (it != password.begin())
					it = password.erase(--it);
			}
			else {
				it = password.insert(it,str[j]);
				it++;
			}
			
		}
		for (char x : password) cout << x;
		cout << '\n';


	}
	return 0;
}