#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <sstream>
#include <cmath>

class Polaire;
class Cartesien;

class Point{

    public:
        virtual void afficher(std::stringstream & flux) const = 0;
        virtual void convertir(Polaire & p) const = 0;
        virtual void convertir(Cartesien & c) const = 0;

    protected:
        friend std::stringstream & operator<<(std::stringstream & flux, const Point & p);
};

#endif