#include "polaire.hpp"

Polaire::Polaire(double a, double d) : m_a(a), m_d(d){}

Polaire::Polaire(const Cartesien & c){
    double x = c.getX();
    double y = c.getY();
    m_a = std::atan2(y, x) * 180 / M_PI;
    m_d = std::sqrt(x * x + y * y);
}

double Polaire::getAngle() const{
    return m_a;
}

void Polaire::setAngle(double a){
    m_a = a;
}

double Polaire::getDistance() const{
    return m_d;
}

void Polaire::setDistance(double d){
    m_d = d;
}

void Polaire::afficher(std::stringstream & flux) const{
    flux << "(a=" << m_a << ";d=" << m_d << ")";
}

void Polaire::convertir(Polaire & p) const{
    p = *this;
}

void Polaire::convertir(Cartesien & c) const{
    c.setX(m_d * std::cos(m_a * M_PI /180));
    c.setY(m_d * std::sin(m_a * M_PI /180));
}