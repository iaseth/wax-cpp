#include "wax_buffer.hpp"



WaxBuffer::WaxBuffer (int length) {
	this->length = length;
	this->buffer = (Byte*)malloc(length);
}

WaxBuffer::~WaxBuffer () {
	free(this->buffer);
}


int WaxBuffer::resize (int n) {
	this->length = n;
	this->buffer = (Byte*)realloc(this->buffer, this->length);
	return WAX_SUCCESS;
}


int WaxBuffer::readBytesFromFile (FILE *ptr) {
	return this->readBytesFromFile(ptr, this->length);
}

int WaxBuffer::readBytesFromFile (FILE *ptr, int n) {
	fread(this->buffer, n, 1, ptr);
	return WAX_SUCCESS;
}


Byte* WaxBuffer::getBuffer () {
	return this->buffer;
}


