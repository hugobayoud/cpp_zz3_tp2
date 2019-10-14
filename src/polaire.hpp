#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include "point.hpp"
#include "cartesien.hpp"

class Polaire : public Point {
    private:
        double m_a;
        double m_d;

    public :
        Polaire(double m_a = 0.0, double m_d = 0.0);
        Polaire(const Cartesien & c);
        double getAngle() const;
        void setAngle(double a);
        double getDistance() const;
        void setDistance(double d);
        void afficher(std::stringstream & flux) const;
        virtual void convertir(Polaire & p) const;
        virtual void convertir(Cartesien & c) const;
};

#endif