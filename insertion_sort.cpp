#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
void insertion_sort(std::vector<T>& vec);

int main()
{
	srand(time(0));
    std::vector<int> vec(10000);
    for(int i{}; i < vec.size(); ++i)
    {
        vec[i] = rand();
    }
	insertion_sort(vec);
}

template <typename T>
void insertion_sort(std::vector<T>& vec)
{
	for(int i{1}; i < vec.size(); ++i)
	{
		T key = vec[i];
		int j = i - 1;
		while(j >= 0 && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			--j;
		}
		vec[j + 1] = key;
	}
}
