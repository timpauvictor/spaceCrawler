#include "libtcod.hpp"
#include "headers/engine.hpp"

Engine game;

int main() {
	while (!TCODConsole::isWindowClosed()) {
		game.update();
		game.render();
		TCODConsole::flush();
	}
	return 0;
}
