#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;  // Number of test cases

    for (int i = 0; i < n; i++) {
        cin >> x >> y;  // Dimensions of the matrix
        vector<vector<int>> a(x, vector<int>(y));  // Matrix `a`
        vector<bool> rowFlag(x, false);  // Flag to mark rows to be nullified
        vector<bool> colFlag(y, false);  // Flag to mark columns to be nullified

        // Input the matrix and mark rows and columns to be nullified
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < y; k++) {
                cin >> a[j][k];
                if (a[j][k] == 0) {
                    rowFlag[j] = true;
                    colFlag[k] = true;
                }
            }
        }

        // Nullify rows
        for (int j = 0; j < x; j++) {
            if (rowFlag[j]) {
                for (int k = 0; k < y; k++) {
                    a[j][k] = 0;
                }
            }
        }

        // Nullify columns
        for (int k = 0; k < y; k++) {
            if (colFlag[k]) {
                for (int j = 0; j < x; j++) {
                    a[j][k] = 0;
                }
            }
        }

        // Output the modified matrix
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < y; k++) {
                cout << a[j][k] << " ";
            }
            cout << "\n";  // Newline after each row
        }
        cout << "\n";  // Separate matrices with an extra newline
    }

    return 0;
}
