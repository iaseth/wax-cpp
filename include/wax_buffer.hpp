#ifndef WAX_BUFFER_HPP
#define WAX_BUFFER_HPP

#include <stdlib.h>

#include "wax_common.hpp"



class WaxBuffer
{
	int length = 0;
	Byte *buffer = NULL;

public:
	WaxBuffer (int length);
	~WaxBuffer ();

	Byte* getBuffer ();
};



#endif