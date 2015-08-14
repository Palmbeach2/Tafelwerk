#pragma once
#include "main.h"
class rome
{
private:
	std::string mem_rome = " ";
	int mem_arab = 0;
	std::string lower_to_upper(const std::string in_rome);

public:
	rome(const std::string in_rome);
	rome(const int in_arab);
	~rome();
	bool rome_to_arab(const std::string rome, int* in_arab);
	bool arab_to_rome(const int in_arab, std::string* in_rome);
	bool rome::check_rome(const std::string in_rome);
};

