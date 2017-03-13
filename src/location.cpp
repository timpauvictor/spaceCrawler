#include "headers/location.hpp"
#include <string>

Location::Location(std::string Loc) { 
    if (Loc.size() > 20) {
        name = "ERR:TooLong";
    } else {
        name = Loc;
    }
}

void Location::changeLocation(std::string newLoc) {
    name = newLoc;
}

const char* Location::getNameAsC() {
    return name.c_str();
} 