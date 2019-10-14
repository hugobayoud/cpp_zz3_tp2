#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include <iterator>
#include "polaire.hpp"
#include "cartesien.hpp"

template <typename T>
class Nuage{
    private:
        std::vector<T> n;

    public:
        typedef typename std::vector<T>::iterator iterator;
        typedef typename std::vector<T>::const_iterator const_iterator;
        Nuage();
        unsigned int size() const;
        void ajouter(T p);
        iterator begin();
        const_iterator begin() const;
        iterator end();
        const_iterator end() const;
};

template <typename T>
Nuage<T>::Nuage(){
}

template <typename T>
unsigned int Nuage<T>::size() const {
    return n.size();
}

template <typename T>
void Nuage<T>::ajouter(T p) {
    n.push_back(p);
}

template <typename T>
typename Nuage<T>::iterator Nuage<T>::begin(){
    return n.begin();
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::begin() const{
    return n.begin();
}

template <typename T>
typename Nuage<T>::iterator Nuage<T>::end(){
    return n.end();
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::end() const{
    return n.end();
}

template <typename T>
T barycentre_v1(Nuage<T> n){
    double x = 0.0, y = 0.0;
    int nb = n.size();
    for(typename Nuage<T>::const_iterator it = n.begin(); it != n.end(); ++it){
        Cartesien c;
        it->convertir(c);
        x += c.getX();
        y += c.getY();
    }
    if(nb == 0){
        return T(0.0, 0.0);
    }   
    return T(Cartesien(x / nb, y / nb));
}

template<> Polaire barycentre_v1<Polaire>(Nuage<Polaire> n){
    double a = 0.0, d = 0.0;
    int nb = n.size();
    for(typename Nuage<Polaire>::const_iterator it = n.begin(); it != n.end(); ++it){
        a += it->getAngle();
        d += it->getDistance();
    }
    if(nb == 0){
        return Polaire(0.0, 0.0);
    }   
    return Polaire(a / nb, d / nb);
}

#endif