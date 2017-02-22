#include "libtcod.hpp"
#include "headers/engine.hpp" //engine needs libtcod first
#include "headers/gui.hpp"

GUI gui;
enum state {build, look, mainMenu, pauseMenu};

Engine::Engine(int maxWidth, int maxHeight) {
	TCODConsole::initRoot(maxWidth, maxHeight, "spaceCrawler dev", false); // required
}

void Engine::update() {
	TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, NULL, NULL); //required
	//--------------------------------------------------------------------------
	gui.update();
}


void Engine::render() {
	TCODConsole::root->clear(); //required
	//--------------------------------------------------------
	TCODConsole::root->setChar(0, 0, 'c');
	gui.render();
	//--------------------------------------------------------
	TCODConsole::flush(); //required
	TCODConsole::waitForKeypress(true);
}
