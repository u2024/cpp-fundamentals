#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int index_max = 0;
    for(int i = 1 ; i < vec.capacity() ; ++i) {
        if(vec[index_max] < vec[i]) {
            index_max = i;
        }
    }
    return vec[index_max];
}
