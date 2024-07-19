#ifndef WAX_BINARY_FILE_HPP
#define WAX_BINARY_FILE_HPP

#include "wax/common.hpp"

#include <stdio.h>



class WaxBinaryFile
{
	FILE *ptr = NULL;

public:
	WaxBinaryFile(const char *filepath);
	~WaxBinaryFile();

	FILE* getPointer () { return this->ptr; }
};



#endif