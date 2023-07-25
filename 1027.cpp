#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    vector<int> count(n);
    
    
    for (int i = 0; i < n; i++) {
        double max_visible = -100000000;
        for (int j = i + 1; j < n; j++) {
            int h = v[j] - v[i];
            int t = j - i;
            double g = h * 1.0 / t;

            if (g <= max_visible)
                continue;
          //  cout << "print max_v : " << max_visible << "\n";
            max_visible = g;
            
            count[i]++; count[j]++;
        //    cout << " count " << count[i] << " " << count[j] << endl;
        }
        
    }
    cout << *max_element(count.begin(), count.end());
    return 0;
}
