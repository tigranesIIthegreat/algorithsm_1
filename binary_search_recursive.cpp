#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
int binary_search(const std::vector<T>& vec, const T& key, int start, int end)
{
    if(end == start)
    {
        if(vec[start] == key)
            return start;
        else
            return -1;
    }
    int mid = start + (end - start) / 2;
    if(vec[mid] == key)
        return mid;
    else if(vec[mid] > key)
        return binary_search(vec, key, start, mid - 1);
    else 
        return binary_search(vec, key, mid + 1, end);
}

int main()
{
    srand(time(0));
    std::vector<int> vec(1000);
    for(int i{}; i < vec.size(); ++i)
    {
        vec[i] = rand();
    }
}