#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int r;
    
    
     while(scanf_s("%d",&r)==1) {

         int i_ = 0;
         int j_ = 0;
         char bro[30][30]{};
        int cnt[26] = { 0 };
        int before = 0;
        int after=0;
        
        
        for (int i = 0; i < r; i++) {
            string t;
            cin >> t;
            int ding[26] = { 0 };
            const char* c = t.c_str();
            for (int j = 0; j < r; j++) {
                bro[i][j] = c[j];

                if (isalpha(bro[i][j]) != 0) {
                    for (int h = 0; h < 26; h++) {

                        if (bro[i][j] == (h + 'A')) {

                            cnt[h]++;
                            ding[h]++;

                            if (ding[h] > 1) {
                                i_ = i;
                                j_ = j;
                            }

                        }
                    }
                }
            }
           }
        for (int h = 0; h < 26; h++) {


            if (cnt[h] == 1)
                before = h;


            if (cnt[h] == r - 1) {
                after = h;
            }
            for (int i = 0; i < r; i++) {
                int dding[26] = { 0 };
                for (int j = 0; j < r; j++) {
                    for (int h = 0; h < 26; h++) {
                        if (bro[j][i] == (h + 'A')) {
                            dding[h]++;
                            if (dding[h] > 1) {
                                if (i_ != 0 && j_ != 0) {
                                    
                                    j_ = i;
                                    break;
                                }
                                i_ = j;
                                j_ = i;
                            }
                        }
                    }
                    
                }
            }
        
           


            }

            if (i_ != 0 || j_ != 0) {
                cout << i_ + 1 << " " << j_ + 1 << " " << (char)(after + 'A') << endl;
            }
            else {
                for (int i = 0; i < r; i++) {

                    for (int j = 0; j < r; j++)
                    {
                        if (bro[i][j] == (before + 'A')) {

                            cout << i + 1 << " " << j + 1 << " " << (char)(after + 'A') << endl;
                            
                        }
                    }
                }
            }
        
        
       }
    return 0;
}