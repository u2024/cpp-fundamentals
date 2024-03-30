#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int x = 0;
    for(int el : numbers)
    {
        if(el % 2 == 0)
        {
            x += el;
        }
    }
    return x;
}
