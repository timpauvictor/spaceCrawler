#include "libtcod.hpp"
#include <string.h>
#include "headers/engine.hpp" //engine needs libtcod first
#include "headers/gui.hpp"

GUI gui;
Ship player;
enum state {build, look, mainMenu, pauseMenu};
state startingState;

Engine::Engine(int maxWidth, int maxHeight) {
	TCODConsole::initRoot(maxWidth, maxHeight, "spaceCrawler dev", false); // required
	startingState = mainMenu;
	gui.changeLocation("Open Space");
}

void Engine::update() {
	TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, NULL, NULL); //required

}


void Engine::render() {
	TCODConsole::root->clear(); //required
	
	// TCODConsole::root->setChar(0, 0, 'c');
	// NOTE: gui.render calls gui.update internally
	gui.render();

	TCODConsole::flush(); //required
	TCODConsole::waitForKeypress(true);
}


