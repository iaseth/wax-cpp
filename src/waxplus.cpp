#include <iostream>

#include <stdlib.h>

#include "wax_common.hpp"
#include "wax_header.hpp"
#include "wax_buffer.hpp"
#include "wax_stock_candle.hpp"


using std::cout;


int main (int argc, char const *argv[])
{
	u32 number_of_rows_to_read = 16;

	if (argc == 1) {
		cout << "Usage:\n\twaxc $filepath\n";
		return 0;
	}

	const char *filepath = argv[1];

	if (argc > 2) {
		number_of_rows_to_read = atoi(argv[2]);
	}

	FILE *ptr = fopen(filepath,"rb");
	if (ptr == NULL) {
		cout << "File not found: " << filepath << '\n';
		return 0;
	}

	WaxBuffer buffer(WAX_FILE_HEADER_LENGTH);
	buffer.readBytesFromFile(ptr, WAX_FILE_HEADER_LENGTH);
	WaxHeader header(buffer);
	header.print();

	int buffer_size = 24;
	buffer.resize(buffer_size);

	for (u32 i = 0; i < header.rowCount(); ++i) {
		buffer.readBytesFromFile(ptr, buffer_size);
		StockCandle candle(buffer.getBuffer());
		candle.print(i+1);

		if (i+1 >= number_of_rows_to_read) break;
	}

	fclose(ptr);

	return 0;
}
