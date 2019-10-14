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

#endif