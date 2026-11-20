/* fn_8288FCA8 is std::vector<bool>::erase(first, last) of the VC10 library (explicit instantiation). */
namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *);
}

#define _Xlength_error fn_82F622A8
#include <vector>
#undef _Xlength_error

template std::vector<bool>::iterator std::vector<bool>::erase(std::vector<bool>::const_iterator,
                                                              std::vector<bool>::const_iterator);
