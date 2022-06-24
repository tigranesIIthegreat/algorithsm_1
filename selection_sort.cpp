#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
void selection_sort(std::vector<T>&);

int main()
{
    srand(time(0));
    std::vector<int> vec(10000);
    for(int i{}; i < vec.size(); ++i)
    {
        vec[i] = rand();
    }
    selection_sort(vec);
}

template <typename T>
void selection_sort(std::vector<T>& vec)
{
    for(int i{}; i < vec.size() - 1; ++i)
    {
        int min_index = i;
        T temp{};
        for(int j = i + 1; j < vec.size(); ++j)
        {
            if( vec[j] < vec[min_index])
            {
                min_index = j;
            }
        }
        temp = vec[i];
        vec[i] = vec[min_index];
        vec[min_index] = temp;
    }
}