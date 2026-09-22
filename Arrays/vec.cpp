#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(5, 0);
    vec.push_back(1);
    std::cout << vec.capacity() << std::endl;

    vec.pop_back();
    vec.pop_back();
    vec.clear();
    std::cout << vec.capacity() << std::endl;

    return 0;
}