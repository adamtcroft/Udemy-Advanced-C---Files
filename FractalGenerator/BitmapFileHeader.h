#pragma once
#pragma pack(2)

#include <cstdint>
using namespace std;

namespace caveofprogramming
{
	struct BitmapFileHeader
	{
		char header[2]{ 'B', 'M' };
		int32_t fileSize;
		int32_t reserved{ 0 };
		int32_t dataOffset;
	};
}
