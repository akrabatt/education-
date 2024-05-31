#include <iostream>
using namespace std;

int main() {
    
    const int rows = 3, columns = 2;
    int numbers[rows][columns] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << numbers [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}