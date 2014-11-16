#ifndef POINT_H
#define POINT_H

class Point
{
	private:
		int x, y;
	public:

		Point();// Default Constructor
		Point(int _x, int _y);// Second Constructor
        	~Point();
    
		Point(const Point& rhs);// Copy Constructor
		Point& operator=(const Point& rhs);// Assignment operator


		int getX() const;
		int getY() const;
		void setX(int x);
		void setY(int y);

        void print() const;
};


#endif
