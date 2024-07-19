#include "wax/stock_candle.hpp"

#include <iostream>
#include <stdio.h>

#include "wax/convert.hpp"


using std::cout;


StockCandle::StockCandle () {}

StockCandle::StockCandle (Byte const *buffer)
{
	this->timestamp = read_n_bytes_into_u32(&buffer[0], 4);
	this->open = read_n_bytes_into_u32(&buffer[4], 4);
	this->high = read_n_bytes_into_u32(&buffer[8], 4);
	this->low = read_n_bytes_into_u32(&buffer[12], 4);
	this->close = read_n_bytes_into_u32(&buffer[16], 4);
	this->volume = read_n_bytes_into_u32(&buffer[20], 4);
}


StockCandle::~StockCandle () {}


int StockCandle::print (int n)
{
	TimeOfDay t = xtod(this->timestamp);
	printf("Row %3d: [ %02d:%02d, %.2f, %.2f, %.2f, %.2f, %.1fM ]\n", n, t.hh, t.mm,
		x100(this->open), x100(this->high),
		x100(this->low), x100(this->close),
		xm(this->volume));

	return WAX_SUCCESS;
}

