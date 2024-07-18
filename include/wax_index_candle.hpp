#ifndef WAX_INDEX_CANDLE_HPP
#define WAX_INDEX_CANDLE_HPP

#include "wax_common.hpp"



class IndexCandle
{
	u32 timestamp, open, high, low, close;

public:
	IndexCandle ();
	IndexCandle (Byte const *buffer);
	~IndexCandle ();

	int print (int n);
};



#endif