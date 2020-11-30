#ifndef Ex90_h
#define Ex90_h

class vect {
    int nElement;
    int* addr;
public:
    vect(int);
    ~vect();
    int& operator [] (int);
};

#endif 
