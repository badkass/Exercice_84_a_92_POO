#include <iostream>
#include "Ex91.h"

using namespace std;

int main() {

   
    int2d tab1(4, 8);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; i++) {
            tab1(i, j) = i + j;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; i++) {
            cout << tab1(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

        return 0;
}

