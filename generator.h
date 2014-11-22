#ifndef GENERATOR_H
#define GENERATOR_H
#include <iostream>
#include <vector>

std::vector<int> generator()
{
	std::vector<int> tab(10);
	for(int i = 0; i < 10; ++i){
		tab.push_back(i);
	}
	return tab;
}
#endif
