class Vector2 {
	private:
		int x, y;
	public:
		//getters and setters
		int getX();
		int getY();
		void setX(int newX);
		void setY(int newY);

		float distanceTo(Vector2 p);

};
