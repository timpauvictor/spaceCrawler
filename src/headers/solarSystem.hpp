#include "planet.hpp"
#include <vector>

class SolarSystem {
    private:
        static int numPlanets;
        std::vector<Planet> planets;
    public:
        SolarSystem();
        std::vector<Planet> getAllPlanets();
        Planet getPlanet(int i);
};