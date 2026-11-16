namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *);
}

#define _Xlength_error fn_82F622A8
#include <vector>
#undef _Xlength_error

extern "C" void fn_8288E3F0(std::vector<bool> *self, unsigned int size)
{
    self->_Trim(size);
}
