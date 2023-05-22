#include "CesarEncoding.h"

std::string CesarEncoding::Encode(const std::string& _string, const int _offset)
{
	std::string _result = "";

	for (size_t i = 0; i < _string.length(); i++)
	{
		char _char = _string[i];
		_char += _offset;
		_result += _char;
	}

	return _result;
}
