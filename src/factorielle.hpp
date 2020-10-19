#ifndef FACTORIELLE_HPP
#define FACTORIELLE_HPP

template<int N>
struct Factorielle{
    public :
        static const unsigned long valeur = N * Factorielle<N-1>::valeur;
};

template<> struct Factorielle<0> {
    public:
        static const unsigned long valeur = 1;
};

#endif