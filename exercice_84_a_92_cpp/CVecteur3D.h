#pragma once
#include <iostream>
using namespace std;

const int SIZE = 3;

class CVecteur3D
{
private:
	float v[SIZE];

public:
	
	CVecteur3D(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
		v[0] = c1; v[1] = c2; v[2] = c3;
	}
		float& operator[] (int);
};

float& CVecteur3D::operator [] (int i) {
	if ((i < 0) || (i > 2)) i = 0;     

	return v[i];
}
