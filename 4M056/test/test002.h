//
// Created by Sébastien Wong on 01/04/18.
//

#ifndef CPP_COURSES_TEST002_H
#define CPP_COURSES_TEST002_H

class Matrice{
private:
    unsigned int n;
    double* coeffs;

public:
    Matrice(unsigned N = 1, double x = 0.);
    Matrice(std::vector<double> v);
    Matrice(const Matrice& copysource);
    ~Matrice();

    double& operator()(unsigned int, unsigned int);
    double taille() const { return n;};
    double trace() const;
    Matrice& operator= (const Matrice& U);

    friend Matrice operator+ (const Matrice&, const Matrice&);
    friend Matrice operator* (const Matrice&, const Matrice&);
    friend std::ostream& operator<< (std::ostream&, const Matrice& );



};

#endif //CPP_COURSES_TEST002_H
