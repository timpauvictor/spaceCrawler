#include <string>

class Location {
    private:
        std::string name;
    public:
        Location(std::string Loc);
        void changeLocation(std::string newLoc);
        const char* getNameAsC();
};