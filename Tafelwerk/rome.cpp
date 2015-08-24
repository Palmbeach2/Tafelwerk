#include "rome.h"
//I=1 V=5 X=10 L=50 C=100 D=500 M=100

//constructors
rome::rome(const std::string in_rome)
{	
	if (check_rome(in_rome) == true)
	{
		mem_rome = rome::lower_to_upper(in_rome);
		rome::rome_to_arab(in_rome,&this->mem_arab);
	}
}

rome::rome(const int in_arab)
{
	mem_arab = in_arab;
}

//destructors
rome::~rome()
{
}

//methods
bool rome::rome_to_arab(const std::string in_rome, int* in_arab)
{
	bool ret_val = check_rome(in_rome);

	for (unsigned int i = 0; i < in_rome.length(); i++)
	{
		std::cout << (digit) in_rome[i] << "\n";
	}
	return ret_val;
}

bool rome::arab_to_rome(const int in_arab, std::string* in_rome)
{
	return true;
}

//checks rome if if it's valid
bool rome::check_rome(const std::string in_rome)
{
	std::string temp = rome::lower_to_upper(in_rome);
	for (unsigned i = 0; i < temp.length(); i++)
	{
		if (temp[i] != 73 && temp[i] != 86 && temp[i] != 88 && temp[i] != 76 && temp[i] != 67 && temp[i] != 68 && temp[i] != 77)
		{
			std::cerr  << temp << " is no valid Roman numeral!\n";
			return false;
		}
	}

	return true;
}

//converts lower case roman numeral to upper case roman numeral
std::string rome::lower_to_upper(const std::string in_rome)
{
	std::string temp = in_rome;
	for (unsigned i = 0; i < temp.length(); i++)
	{
		if (temp[i] == 105 || temp[i] == 118 || temp[i] == 120 || temp[i] == 108 || temp[i] == 99 || temp[i] == 100 || temp[i] == 109)
		{
			temp[i] -= 32;
		}
	}
	return temp;
}
