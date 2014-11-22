#include <vector>

int sum(const std::vector<int>& tab)
{
	int sum = 0;
	for(int i = 0; i < tab.size(); ++i){
		sum += tab[i];
	}
	return sum;
}
