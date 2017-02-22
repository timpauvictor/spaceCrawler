#include "libtcod.hpp"

class Actor {
    public:
        void deltaMove(int dx, int dy);
        void moveTo(int x, int y);
    private:
        char displayChar;
        TCODColor color;
};