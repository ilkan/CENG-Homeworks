#include "Array.h"

template <class T,int N>
void ArrayContainer<T,N>::set(int i,T val)
{
     elements[i]=val;
}

template <class T,int N>
T ArrayContainer<T,N>::get(int i) const
{
     return elements[i];
}
