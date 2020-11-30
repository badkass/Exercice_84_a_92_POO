#ifndef Ex92_h
#define Ex92_h

class histo {
    float min; // Borne inférieur
    float max; // borne supérieur
    int n_tranche; // nombre de tranches
    int* addr; // pointeur sur les compteurs associé à chaque interval
    float ecart; // largeur d'une tranche
public:
    histo(float = 0.0, float = 1.0, int = 10);
    ~histo();
    histo& operator << (float);
    int operator [] (int);
};

#endif