#include <iostream>

using namespace std;

void printer(int array[10][10]);

int main() {
    int arr[][10] = {
            {0, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {1, 0, 3, 4, 5, 6, 7, 8, 9, 10},
            {1, 2, 0, 4, 5, 6, 7, 8, 9, 10},
            {1, 2, 3, 0, 5, 6, 7, 8, 9, 10},
            {1, 2, 3, 4, 0, 6, 7, 8, 9, 10},
            {1, 2, 3, 4, 5, 0, 7, 8, 9, 10},
            {1, 2, 3, 4, 5, 6, 0, 8, 9, 10},
            {1, 2, 3, 4, 5, 6, 7, 0, 9, 10},
            {1, 2, 3, 4, 5, 6, 7, 8, 0, 10},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
    };
    printer(arr);
    return 0;
}

void printer(int array[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
