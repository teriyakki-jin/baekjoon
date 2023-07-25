#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int count = 1;
	char m[8] = { 'c', 'j', 'n','m', 't', 's', 'l', 'd' };
	char mo[6] = { 'a','e','i','o','u','h' };
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '\'')
		{
			for (int k = 0; k < 6; k++) {
				if (str[i + 1] == mo[k]) {
					for (int j = 0; j < 7; j++) {
						if (i > 0) {
							if (str[i - 1] == m[j]) {
								count++;
							}
						}
						else {
							if (str[i - 1] == m[j] && i == 1) {
								count++;
							}
						}

					}
					if (i > 1) {
						if (str[i - 2] == 'q') {
							if (str[i - 1] == 'u') {
								count++;
							}
						}
					}
				}
			}

		}
		else if (str[i] == ' ') {
			count++;
		}
		else if (str[i] == '-') {
			count++;
		}
	}
	cout << count << endl;

}