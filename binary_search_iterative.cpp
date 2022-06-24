#include <iostream>
#include <vector>

template <typename T>
int binary_search(const std::vector<T>& vec, const T& key)
{
    int start = 0;
    int end = vec.size();
    int mid{};
    while(end >= start)
    {
        mid = start + (end - start) / 2;
        if(vec[mid] == key)
            return mid;
        else if(vec[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    std::vector<int> vec{1,2,3,5,8,9,11,15,20,26};
    std::cout << binary_search(vec, 15);
}