#ifndef POINT_H
#define POINT_H

class Point
{
	public:
        int x;
        int y;
    
    public:
    
		Point();// Default Constructor
		Point(int _x, int _y);// Second Constructor

        int getX() const;
		int getY() const;
		void setX(int x);
		void setY(int y);

};


#endif
