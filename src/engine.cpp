#include "libtcod.hpp"
#include "headers/engine.hpp" //engine needs libtcod first

Engine::Engine() {
	TCODConsole::initRoot(80, 50, "spaceCrawler dev", false); // required
}

void Engine::update() { //
	TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, NULL, NULL); //required
}

void Engine::render() {
	TCODConsole::root->clear(); //required

	TCODConsole::root->putChar(10, 10, '@');

	TCODConsole::flush(); //required
}
