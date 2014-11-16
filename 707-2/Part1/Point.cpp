#include "Point.h"

template <class T>
Point<T>::Point( const T u, const T v ):x(u),y(v){ }

template <class T>
T Point<T>::getX() const
{
	return x;
}
template <class T>
T Point<T>::getY() const
{
	return y;
}
