#include <iostream>
#include <algorithm>
using namespace std;

string A[105];

int main() {
    int col = 0, row = 0;

    // 讀取輸入直到 EOF
    while (getline(cin, A[col])) {
        row = max(row, (int)A[col].size());
        col++;
    }

    // 將結果進行轉置並輸出
    for (int i = 0; i < row; i++) {
        for (int j = col - 1; j >= 0; j--) {
            if (i >= A[j].size()) {
                cout << " ";
            } else {
                cout << A[j][i];
            }
        }
        cout << endl;  // 換行
    }

    return 0;
}

