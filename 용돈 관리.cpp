#include <iostream>
#include <vector>

using namespace std;


int main() {
	int N, M;	// N : 돈을 사용하는 일 수  M : 통장에서 돈을 빼내는 횟수 
	cin >> N >> M;
	vector <int> v;
	int k;
	
	for (int i = 0; i < N;i++) {
		int K;
		cin >> K;
		v.push_back(K);
		
		
		
	}
	int left = 0;
	int right = 1000000000;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		int data = 0;
		int cnt = 0;
		
		bool over = false;
		for (int i = 0; i < N; i++) {
			if (v[i] > mid) {
				left = mid + 1;
				over = true;
			}
			if (data >= v[i]) {
				data -= v[i];
			}
			else {
				data = mid - v[i];
				cnt++;
			}
			

		}
		if (over) continue;
		if (cnt <= M) {
			right = mid - 1;
			k = mid;
		}
		
		else {
			
			left = mid + 1;
		}
	//	cout << left << " " <<  right << endl;
		//cout << cnt << endl;
	}
	cout << k << '\n';

}


	

