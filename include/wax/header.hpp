#ifndef WAX_HEADER_HPP
#define WAX_HEADER_HPP

#include "wax/common.hpp"
#include "wax/buffer.hpp"



class WaxHeader
{
	u32 version; // 2 bytes
	u32 format; // 2 bytes
	u32 header_lines_count; // 1 byte
	u32 column_count; // 1 byte
	u32 row_length; // 2 bytes
	u32 row_count; // 4 bytes
	u32 default_value; // 4 bytes

public:
	WaxHeader ();
	WaxHeader (WaxBuffer &buffer);
	~WaxHeader ();

	u32 rowCount () { return this->row_count; }

	int print ();
};


#endif