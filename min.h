#include <vector>


int minFromVector(const std::vector<int> & tab)
{
	int min = tab[0];
	for(int i = 0; i < tab.size(); ++i)
	{
		if(min > tab[i])
		{
			min = tab[i];
		}
	}
	return min;
}
