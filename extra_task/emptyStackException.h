#include <stdexcept>
#include <string>
#ifndef test
#define test
class empty_stack_exception : public std::out_of_range{
    public:
    empty_stack_exception(std::string info) : std::out_of_range(info){};
};
#endif