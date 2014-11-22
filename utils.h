include<vector>
include<iostdlib>

void show(std::vector<int> & tab){
	std::vector<int> result = tab;
	for(int i = 0; i < result.size(); i++){
		std::cout << result[i] << std::endl;
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
		tab.push_back(i);
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
