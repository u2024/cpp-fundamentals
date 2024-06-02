#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int> &ptr)
{
    std::cout << "Value_:_" << *ptr << '\n';
    std::cout << "Use_count : " << ptr.use_count() << '\n';
    *ptr = 20;
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout << "Value_:_" << *number << '\n';
    std::cout << "Use_count : " << number.use_count() << '\n';
    foo(number);
    std::cout << "Value_:_" << *number << '\n';
    std::cout << "Use_count : " << number.use_count() << '\n';
    return 0;
}
