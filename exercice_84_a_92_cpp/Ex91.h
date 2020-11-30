#ifndef Ex91_h
#define Ex91_h

class int2d {
    int nb_lignes;
    int nb_col;
    int* addr_val;
public:
    int2d(int nl, int nc);
    ~int2d();
    int& operator() (int i, int j);
};

#endif