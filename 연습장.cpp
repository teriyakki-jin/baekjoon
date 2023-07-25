#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int r;
  


    for (int R = 0; R < 2; R++) {
        char bro[30][30];
        int cnt[26] = { 0 };
        int before  = 0 ;
        int after  = 0 ;

        cin >> r;
        for (int i = 0; i < r; i++) {
            string t;
            cin >> t;
            int t_len = t.length();
            const char* c = t.c_str();
            for (int j = 0; j < r; j++) {
                bro[i][j] = c[j];
                if (isalpha(bro[i][j]) != 0) {
                    for (int h = 0; h < 26; h++) {
                        if (bro[i][j] == (h + 'A'))
                            cnt[h]++;
                    }
                }
            }

        }
        for (int h = 0; h < 26; h++) {
            if (cnt[h] == 1)
                before = h;
            if (cnt[h] == r - 1)
                after = h;
        }
        for (int i = 0; i < r; i++) {

            for (int j = 0; j < r; j++)
            {
                if (bro[i][j] == (before + 'A')) {
                    cout << i + 1 << " " << j + 1 << " " << (char)(after + 'A') << endl;
                    break;
                }
            }
        }

    }
    return 0;
}