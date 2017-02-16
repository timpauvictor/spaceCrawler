#include "libtcod.hpp"
#include "headers/engine.hpp"
int _gameWidth = 150;
int _gameHeight = 75;
Engine game(_gameWidth, _gameHeight);

int main() {
	while (!TCODConsole::isWindowClosed()) {
		game.update();
		game.render();
		TCODConsole::flush();
	}
	return 0;
}
