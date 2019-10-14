#include "point.hpp"

std::stringstream & operator<<(std::stringstream & flux, const Point & p){
    p.afficher(flux);
    return flux;
}