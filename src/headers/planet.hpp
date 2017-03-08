class Planet {
	private:
		int maxPop;
		int currentPop;
		int width, height, size;
		bool isColonized;
		int currentOwner;
	public:
		Planet(int w, int h, bool isCol);
		void render();
};
