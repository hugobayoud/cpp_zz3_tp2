#ifndef COSINUS_HPP
#define COSINUS_HPP

#include "exponentielle.hpp"

template<int N>
struct Cosinus{
    static double valeur(double x){
        return (Puissance<N>::valeur(-1.0) * Puissance<2*N>::valeur(x) / Factorielle<2*N>::valeur) + Cosinus<N-1>::valeur(x);
    }
};

template <> struct Cosinus<0>{
    static double valeur(double){
        return 1.0;
    }
};

template<int N>
struct Sinus{
    static double valeur(double x){
        return (Puissance<N>::valeur(-1.0) * Puissance<2*N+1>::valeur(x) / Factorielle<2*N+1>::valeur) + Sinus<N-1>::valeur(x);
    }
};

template <> struct Sinus<0>{
    static double valeur(double){
        return 0.0;
    }
};


#endif