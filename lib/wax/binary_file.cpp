#include "wax/binary_file.hpp"



WaxBinaryFile::WaxBinaryFile (const char *filepath) {
	this->ptr = fopen(filepath, "rb");
}

WaxBinaryFile::~WaxBinaryFile () {
	if (this->ptr != NULL) {
		fclose(ptr);
	}
}


