#include "wax_buffer.hpp"



WaxBuffer::WaxBuffer (int length) {
	this->length = length;
	this->buffer = (Byte*)malloc(length);
}

WaxBuffer::~WaxBuffer () {
	free(this->buffer);
}


Byte* WaxBuffer::getBuffer () {
	return this->buffer;
}


