#include "libtcod.hpp"
#include "headers/engine.hpp" //engine needs libtcod first
#include "headers/gui.hpp"

GUI gui;


Engine::Engine(int maxWidth, int maxHeight) {
	TCODConsole::initRoot(maxWidth, maxHeight, "spaceCrawler dev", false); // required
}

void Engine::update() {
	TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, NULL, NULL); //required
}


void Engine::render() {
	TCODConsole::root->clear(); //required

	TCODConsole::root->putChar(10, 10, '@');
	

	TCODConsole::flush(); //required
}
