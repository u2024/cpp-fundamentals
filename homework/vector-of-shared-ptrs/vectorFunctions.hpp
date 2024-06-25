#pragma once
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> &vec);
void add10(std::vector<std::shared_ptr<int>> &vec);
void sub10(const std::shared_ptr<int> &ptr);
void sub10(std::vector<std::shared_ptr<int>> &vec);
