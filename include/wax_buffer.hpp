#ifndef WAX_BUFFER_HPP
#define WAX_BUFFER_HPP

#include <stdio.h>
#include <stdlib.h>

#include "wax_common.hpp"



class WaxBuffer
{
	int length = 0;
	Byte *buffer = NULL;

public:
	WaxBuffer (int length);
	~WaxBuffer ();

	int readBytesFromFile (FILE *ptr, int n);

	Byte* getBuffer ();
};



#endif