#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vector;
    for(int i = 1; i < count + 1; ++i) {
        vector.push_back(i * step);
    }
    return vector;
}
