#ifndef WAX_BUFFER_HPP
#define WAX_BUFFER_HPP

#include <stdio.h>
#include <stdlib.h>

#include "wax/common.hpp"
#include "wax/binary_file.hpp"



class WaxBuffer
{
	int length = 0;
	Byte *buffer = NULL;

public:
	WaxBuffer (int length);
	~WaxBuffer ();

	int resize (int n);

	int readBytesFromFile (FILE *ptr, int n);
	int readBytesFromFile (FILE *ptr);

	int readBytesFromFile (WaxBinaryFile &file, int n) { return this->readBytesFromFile(file.getPointer(), n); }
	int readBytesFromFile (WaxBinaryFile &file) { return this->readBytesFromFile(file, this->length); }

	Byte* getBuffer ();
};



#endif