#ifndef _POINT_H_
#define _POINT_H_

template <class T>
class Point
{
	public:
	   Point();
	   Point( const T u, const T v );
           T getX( ) const;
	   T getY( ) const;

	private:
	   T x,y;
};
#endif
