#ifndef WAX_STOCK_CANDLE_HPP
#define WAX_STOCK_CANDLE_HPP

#include "wax/common.hpp"



class StockCandle
{
	u32 timestamp, open, high, low, close, volume;

public:
	StockCandle ();
	StockCandle (Byte const *buffer);
	~StockCandle ();

	int print (int n);
};


#endif