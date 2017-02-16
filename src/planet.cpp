#include "headers/planet.hpp"

Planet::Planet(int w, int h, bool isCol = false) {
    isColonized = isCol;
    width = w;
    height = h;
    size = width * height / 100;
}

void Planet::render() {
    
}