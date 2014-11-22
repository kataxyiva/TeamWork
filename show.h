#include "generator.h"
#include<iostream>
#include<vector>

void show(){
	std::vector<int> result = generator();
	for(int i = 0; i < result.size(); i++){
		std::cout << result[i] << std::endl;
	}
}
