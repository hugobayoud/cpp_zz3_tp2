#ifndef PUISSANCE_HPP
#define PUISSANCE_HPP

template<int N>
struct Puissance{
    static double valeur(double x){
        return (Puissance<N-1>::valeur(x) * x);
    }
};

template <> struct Puissance<0>{
    static double valeur(double){
        return 1.0;
    }
};

#endif