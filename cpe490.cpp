#include <iostream>
#include <algorithm>
using namespace std;

string A[105];

int main() {
    int col = 0, row = 0;

    // Ū����J���� EOF
    while (getline(cin, A[col])) {
        row = max(row, (int)A[col].size());
        col++;
    }

    // �N���G�i����m�ÿ�X
    for (int i = 0; i < row; i++) {
        for (int j = col - 1; j >= 0; j--) {
            if (i >= A[j].size()) {
                cout << " ";
            } else {
                cout << A[j][i];
            }
        }
        cout << endl;  // ����
    }

    return 0;
}

