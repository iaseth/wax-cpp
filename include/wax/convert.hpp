#ifndef WAX_CONVERT_HPP
#define WAX_CONVERT_HPP

#include "wax/common.hpp"


typedef struct TimeOfDay {
	u32 hh, mm, ss;
} TimeOfDay;

TimeOfDay xtod (u32 timestamp);
double x100 (u32 price);
double xk (u32 price);
double xm (u32 price);


#endif