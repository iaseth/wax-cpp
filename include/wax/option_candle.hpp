#ifndef WAX_OPTION_CANDLE_HPP
#define WAX_OPTION_CANDLE_HPP

#include "wax/common.hpp"



class OptionCandle
{
	u32 timestamp, open, high, low, close, volume, oi;

public:
	OptionCandle ();
	OptionCandle (Byte const *buffer);
	~OptionCandle ();

	int print (int n);
};



#endif