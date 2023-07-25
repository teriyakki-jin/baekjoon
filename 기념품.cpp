#include <iostream>
#include <queue>
using namespace std;
int main(void) {
	queue<int> q;
	

	int num;
	long long t = 1;
	cin >> num;
	for (int i = 1; i < num+1; i++) {
		q.push(i);
		
	}
	
	while (1 != q.size()) {
		int x = (t * t * t) % q.size();
		for (int i = 1; i < x; i++) {
			
			q.push(q.front());
			
			q.pop();
		}
		
		q.pop();

		t++;
	}
	cout << q.front() << endl;
	q.pop();
	return 0;
}