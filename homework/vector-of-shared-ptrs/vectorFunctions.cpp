#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> v;
    v.resize(count);
    for(int i = 0; i < count; ++i)
    {
        v[i] = std::make_shared<int>(i);
    }
    return v;
}

void print(std::vector<std::shared_ptr<int>> &vec)
{
    for(const auto & ptr : vec)
    {
        std::cout << *ptr << '\n';
    }
}

auto add10(std::vector<std::shared_ptr<int>> &vec)
{
    for(auto & ptr : vec)
    {
        if(ptr){
            *ptr += 10;
        }
    }
}

auto sub10(int* const ptr)
{
    if(ptr){
    *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> &vec)
{
    for(auto & ptr : vec)
    {
        sub10(ptr.get());
    }
}
