#include "../include/libtcod.hpp"
#include "headers/gui.hpp"
#include "headers/location.hpp"
#include <string>

TCODConsole *guiCon = new TCODConsole(150, 5);
Location *currentLocation = new Location("Milky Way");

GUI::GUI() {

}


void GUI::render() {
	guiCon->setDefaultBackground(TCODColor::copper);
	guiCon->clear();
	update();
	TCODConsole::blit(guiCon,0,0,150,5,TCODConsole::root,0,70);
	TCODConsole::flush();
	TCODConsole::waitForKeypress(true);
	
}
void GUI::update() {
	char curBlurb[] = "Current Location: ";
	strcat(curBlurb, currentLocation->getNameAsC());
	guiCon->print(0, 0, curBlurb);
}

void GUI::changeLocation(std::string newLoc) {
	currentLocation->changeLocation(newLoc);
}