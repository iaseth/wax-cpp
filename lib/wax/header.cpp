#include "wax/header.hpp"

#include <stdio.h>

#include "wax/common.hpp"


WaxHeader::WaxHeader () {}

WaxHeader::WaxHeader (WaxBuffer &bufferObject) {
	Byte const *buffer = bufferObject.getBuffer();
	this->version = read_n_bytes_into_u32(&buffer[0], 2);
	this->format = read_n_bytes_into_u32(&buffer[2], 2);
	this->header_lines_count = read_n_bytes_into_u32(&buffer[4], 1);
	this->column_count = read_n_bytes_into_u32(&buffer[5], 1);
	this->row_length = read_n_bytes_into_u32(&buffer[6], 2);
	this->row_count = read_n_bytes_into_u32(&buffer[8], 4);
	this->default_value = read_n_bytes_into_u32(&buffer[12], 4);
}

WaxHeader::~WaxHeader () {}


int WaxHeader::print ()
{
	printf("\tWax Version: %d\n", this->version);
	printf("\tWax Format: %d\n", this->format);
	printf("\tHeader Lines: %d\n", this->header_lines_count);
	printf("\tColumn Count: %d\n", this->column_count);
	printf("\tRow Length: %d\n", this->row_length);
	printf("\tRow Count: %d\n", this->row_count);
	printf("\tDefault Value: %d\n", this->default_value);
	return WAX_SUCCESS;
}


