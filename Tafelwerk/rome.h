#pragma once
#include "main.h"
class rome
{
private:
	std::string mem_rome;
	int mem_arab;

public:
	rome(const std::string in_rome);
	rome(const int in_arab);
	~rome();
	bool rome_to_arab(const std::string rome, int* in_arab);
	bool arab_to_rome(const int in_arab, std::string* in_rome);
	bool check_rome(std::string in_rome);
};

