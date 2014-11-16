#ifndef _MyException_H_
#define _MyException_H_


class MyException 
{
	public:
   		MyException() : message( "My Exception Class Message" ) { }
   		const char *show() const { return message; }
	private:
   		const char *message;
};

#endif
