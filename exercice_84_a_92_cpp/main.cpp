#include <iostream>
#include "Ex90.h"

using namespace std;

int main() {

   
    vect v1_vect(4);
    for (int i = 0; i < 6; i++) {
        v1_vect[i] = i;
    }
    for (int i = 0; i < 6; i++) {
        cout << v1_vect[i] << " ";
    }
	return 0;
}

