/*
 * Main Engine Class
 * ------------------------------------------------------------------------------------
 *  Takes care of calling all render functions from applicable objects
*/
class Engine {
	public:
		Engine(int x, int y);
		//~Engine();
		void update();
		void render();
		void updateLocation(char x[]);
};
