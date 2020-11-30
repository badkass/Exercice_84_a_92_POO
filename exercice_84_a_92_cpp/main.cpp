#include <iostream>
#include "CVecteur3D.h"
#include "Ex89.h"

using namespace std;

int main() {

    vecteur_3d_4 v1_4(5, 7, 3);
    const vecteur_3d_4 v2_4(5, 3, 1);
    cout << "v1_4: ";
    for (int i = 0; i < 3; i++) {
        cout << v1_4[i] << " ";
    }
    cout << endl;
    cout << "v2_4: ";
    for (int i = 0; i < 3; i++) {
        cout << v2_4[i] << " ";
    }
    for (int i = 0; i < 3; i++) {
        v1_4[i] = i;
    }
    cout << endl;
    cout << "v1_4: ";
    for (int i = 0; i < 3; i++) {
        cout << v1_4[i] << "";
    }

	return 0;
}

