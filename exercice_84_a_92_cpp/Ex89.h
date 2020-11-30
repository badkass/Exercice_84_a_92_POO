#pragma once
#ifndef ex89_h
#define ex89_h

#include <iostream>
class vecteur_3d_4 {
    float vect[3];
public:
    vecteur_3d_4(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
        vect[0] = c1;
        vect[1] = c2;
        vect[2] = c3;
    }
    float operator [] (int) const; 
    float& operator [] (int); 
};

#endif