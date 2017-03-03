class Vector2 {
	private:
		int x, y;
	public:
		//getters and setters
		Vector2(int argX, int argY);
		Vector2();
		int getX();
		int getY();
		void setX(int newX);
		void setY(int newY);

		float distanceTo(Vector2 p);

};
