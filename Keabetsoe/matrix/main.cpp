#include <iostream>

using namespace std;

int main() {

    int matrice1[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Please enter number for index (" << i << "," << j << "):";
            cin >> matrice1[i][j];
        }
    }

    int matrice2[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Please enter number for index (" << i << "," << j << "):";
            cin >> matrice2[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    int result[2][2] = {0};


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }


    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
