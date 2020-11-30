#include "Ex92.h"
histo::histo(float mini, float maxi, int nTran) {
    // Protection
    if (maxi < mini) {
        float temp = maxi;
        maxi = mini;
        mini = temp;
    }
    if (maxi == mini) {
        maxi = mini + 1.0; //arbitraire
    }
    if (nTran < 1) {
        n_tranche = nTran;
    }
    min = mini;
    max = maxi;
    n_tranche = nTran;
    addr = new int[nTran];
    for (int i = 0; i <= n_tranche - 1; i++) {
        addr[i] = 0;
    }
    ecart = (max - min) / n_tranche;
}

histo::~histo() {
    delete addr;
}

histo& histo::operator<<(float v) {
    int nt = (v - min);
    if (nt >= 0 && nt <= n_tranche - 1) {
        addr[n_tranche]++;
    }
    return *this;
}

int histo::operator[](int n) {
    if (n < 1 || n > n_tranche) {
        n = 1;
    }
    return addr[n - 1];
}