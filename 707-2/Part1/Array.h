#ifndef _ARRAY_H_
#define _ARRAY_H_


template <class T,int N>
class ArrayContainer
{
      private:
              T elements[N];
      public:
            void set(int i,T val);
            T get(int i)const;
};
#endif
