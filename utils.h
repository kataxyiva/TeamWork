#include<vector>
#include<iostream>

void show(std::vector<int> & tab){
	for(int i = 0; i < tab.size(); i++){
		std::cout << tab[i] << std::endl;
	}
}



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


int maxFromVector(const std::vector<int> & tab)
{
	int max = tab[0];
	for(int i = 0; i < tab.size(); ++i)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}
	}
	return max;
}


std::vector<int> generator()
{
	std::vector<int> tab(10);
	for(int i = 0; i < 10; ++i){
		tab[i] = i;
	}
	return tab;
}



int sum(const std::vector<int>& tab)
{
	int sum = 0;
	for(int i = 0; i < tab.size(); ++i){
		sum += tab[i];
	}
	return sum;
}
