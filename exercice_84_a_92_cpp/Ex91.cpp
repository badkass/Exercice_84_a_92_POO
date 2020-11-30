#include "Ex91.h"
int2d::int2d(int nl, int nc) {
    nb_lignes = nl;
    nb_col = nc;
    addr_val = new int[nl * nc];
    for (int i = 0; i < nl * nc; i++) {
        addr_val[i] = 0; // Set to 0
    }
}

int2d::~int2d() {
    delete addr_val;
}

int& int2d::operator()(int i, int j) {
    if (i < 0 || i >= nb_lignes) {
        i = 0; // default value (protection)
    }
    if (j < 0 || j >= nb_col) {
        j = 0; // default value (protection)
    }
    return *(addr_val + i * nb_col + j);
}