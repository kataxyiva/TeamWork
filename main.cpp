
#include <iostream>
#include "utils.h"

int main(){
	std::cout <<"DUPA! a nie helloworld" << std::endl;
	std::vector<int> tab = generator();
	show(tab);
	std::cout << "Minimalna wartosc: " << minFromVector(tab) << std::endl;
	std::cout << "Maksymalna wartosc: "<< maxFromVector(tab) << std::endl;
	std::cout << "Suma wartosci: " << sum(tab) << std::endl;
	return 0;
}

