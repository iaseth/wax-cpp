#ifndef WAX_STOCK_CANDLE_HPP
#define WAX_STOCK_CANDLE_HPP

#include "wax_common.hpp"



typedef struct StockCandle {
	u32 timestamp, open, high, low, close, volume;
} StockCandle;

int read_stock_candle_from_bytes(StockCandle *candle, Byte const *buffer);
int print_stock_candle(StockCandle *candle, int n);


#endif