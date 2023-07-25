#include <iostream>
#include <vector>
using namespace std;

int min(int a) {
	if (a > 100)
		a = 100;
	return a;
}

 unsigned long long power(vector <double> p) {
	unsigned long long t =  p[0] * (100 + p[1]) * (100*(100 - min(p[2])) + (min(p[2]) * p[3])) * (100 + p[4]);
	return t / 1000000;
}

int main() {
	vector <double> cree;
	vector <double> pabu;
	vector <double> v;
	vector <double> v1;
	vector <unsigned long long> fight1;
	vector <unsigned long long> fight2;

	for (int i = 0; i < 5; i++) {

		int t;
		cin >> t;
		cree.push_back(t);
	}
	fight1.push_back(power(cree));
	
	
	for (int i = 0; i < 5; i++) {
		int t;
		cin >> t;
		pabu.push_back(t);
	}
	fight2.push_back(power(pabu));

	for (int i = 0; i < 5; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i < 5; i++) {
		int t;
		cin >> t;
		v1.push_back(t);
	}
	for (int i = 0; i < 5; i++) {
		cree[i] = cree[i] - v[i] + v1[i];
		pabu[i] = pabu[i] - v1[i] + v[i];
	}
	fight1.push_back(power(cree));
	fight2.push_back(power(pabu));
	//cout << fight1[0] << " " << fight2[0] << '\n';
	if (fight1[0] < fight1[1])
		cout << '+' << '\n';
	else if (fight1[0] == fight1[1])
		cout << '0' << '\n';
	else
		cout << '-' << '\n';

	if (fight2[0] < fight2[1])
		cout << '+' << '\n';
	else if (fight2[0] == fight2[1])
		cout << '0' << '\n';
	else
		cout << '-' << '\n';
}