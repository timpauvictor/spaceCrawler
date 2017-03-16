#include "libtcod.hpp"
#include "vector2.hpp"

class Actor {
    public:
        Actor(Vector2 location, char dc, TCODColor color);s
        void deltaMove(int dx, int dy);
        void moveTo(int x, int y);
    private:
        Vector2 location;
        char displayChar;
        TCODColor color;
};