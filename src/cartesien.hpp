#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include "point.hpp"
#include "polaire.hpp"

class Cartesien : public Point{
    private:
        double m_x;
        double m_y;
    
    public:
        Cartesien(double x = 0.0, double y = 0.0);
        Cartesien(const Polaire & p);
        double getX() const;
        void setX(double x);
        double getY() const;
        void setY(double y);
        void afficher(std::stringstream& flux) const;
        virtual void convertir(Polaire & p) const;
        virtual void convertir(Cartesien & c) const;
};

#endif