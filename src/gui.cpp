#include "libtcod.hpp"
#include "headers/gui.hpp"
#include "headers/engine.hpp"
#include "headers/location.hpp"
#include <string>

TCODConsole *guiCon = new TCODConsole(150, 5);
Location l("Earth");

GUI::GUI() {
	guiCon->setDefaultBackground(TCODColor::red);
}

void GUI::render() {
	TCODConsole::blit(guiCon,0,0,150,5,TCODConsole::root,0,70);
	TCODConsole::flush();
	TCODConsole::waitForKeypress(true);
	
}
void GUI::update() {
	char str[] = "Current Location: ";
	strcat(str, l.getNameAsC());
	guiCon->print(0, 0, str);
}