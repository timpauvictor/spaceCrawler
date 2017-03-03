#include "libtcod.hpp"
#include "vector2.hpp"

class Actor {
    public:
        void deltaMove(int dx, int dy);
        void moveTo(int x, int y);
    private:
        Vector2 location;
        char displayChar;
        TCODColor color;
};