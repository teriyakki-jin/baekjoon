#include <iostream>

using namespace std;
int chesspan[8][8];
bool same(int X, int Y) {
	if (X == Y)
		return true;
	else
		return false;
}
int main() {
	string king, stone;
	int n, kingx, kingy, stonex, stoney;
	cin >> king >> stone >> n;
	kingx = 7 - (king[1] - '1');
	kingy = king[0] - 'A';
	stonex = 7 - (stone[1] - '1');
	stoney = stone[0] = 'A';

	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		if (x == "B")
		{
			if(same()
		}
		else if (x == "L")
		{
		}
		else if (x == "R") {
		}
		else if (x == "T") {

		}
		else if (x == "RT") {

		}
		else if (x == "LT") {

		}
		else if (x == "RB") {

		}
		else if (x == "LB") {

		}
	}
}