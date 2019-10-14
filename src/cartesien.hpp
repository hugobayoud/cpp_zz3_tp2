#include "cartesien.hpp"

Cartesien::Cartesien(double x, double y) : m_x(x), m_y(y) {}

Cartesien::Cartesien(const Polaire & p){
    double d = p.getDistance();
    double a = p.getAngle() * M_PI / 180;
    m_x = d * std::cos(a);
    m_y = d * std::sin(a);
}

double Cartesien::getX() const{
    return m_x;
}

void Cartesien::setX(double x){
    m_x = x;
}

double Cartesien::getY() const{
    return m_y;
}

void Cartesien::setY(double y){
    m_y = y;
}

void Cartesien::afficher(std::stringstream & flux) const{
    flux << "(x=" << m_x << ";y=" << m_y << ")";
}

void Cartesien::convertir(Polaire & p) const{
    p.setAngle(std::atan2(m_y, m_x) * 180 / M_PI);
    p.setDistance(std::sqrt(m_x * m_x + m_y * m_y));
}

void Cartesien::convertir(Cartesien & c) const{
    c = *this;
}