#include <iostream>
#include "Ex92.h"

using namespace std;

int main() {

   
    const int n_tranche = 4;
    histo h(0.0, 5.0, n_tranche);
    h << 1.5 << 2.4 << 3.8 << 3.0 << 2.0 << 3.5 << 2.8 << 4.6;
    h << 12.0 << -3.5;
    for (int i = 0; i < 10; i++) {
        h << i / 2.0;
    }
    cout << "valeurs des tranches" << endl;
    for (int i = 1; i <= n_tranche; i++) {
        cout << "numéro " << i << " : " << h[i] << endl;
    }

        return 0;
}

