#ifndef WAX_OPTION_CANDLE_HPP
#define WAX_OPTION_CANDLE_HPP

#include "wax_common.hpp"



typedef struct OptionCandle {
	u32 timestamp, open, high, low, close, volume, oi;
} OptionCandle;



#endif