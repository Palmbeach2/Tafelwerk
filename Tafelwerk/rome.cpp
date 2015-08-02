#include "rome.h"
//I=1 V=5 X=10 L=50 C=100 D=500 M=100

//constructors
rome::rome(const std::string in_rome)
{	
	if (check_rome(in_rome) == true)
	{
		mem_rome = in_rome;
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
bool rome_to_arab(const std::string in_rome, int* in_arab)
{
	return true;
}

bool arab_to_rome(const int in_arab, std::string* in_rome)
{
	return true;
}

bool check_rome(std::string in_rome)
{
	//for (int i=0; i < in_rome.length(); i++)
	//{
	//	std::cout << in_rome[i];
	//}
	std::cout << in_rome.length();

	return true;
}

