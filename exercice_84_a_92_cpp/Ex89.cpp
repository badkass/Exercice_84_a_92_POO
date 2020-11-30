#include "Ex89.h"

// Non constant vect
float& vecteur_3d_4::operator[](int i) {
    if (i < 0 || i > 2) {
        i = 0; // Evite le débordement
    }
    return vect[i];
}

// Constant vect
float vecteur_3d_4::operator [] (int i) const {
    if (i < 0 || i > 2) {
        i = 0; // Evite le débordement
    }
    return vect[i];
}