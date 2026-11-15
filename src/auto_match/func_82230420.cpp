#include <string>
#include <string.h>
extern "C" __declspec(noreturn) void fn_82F622E0(const char *);

extern "C" std::string *fn_82230420(std::string *self, unsigned int position, unsigned int count)
{
    if (self->_Mysize < position) {
        fn_82F622E0("invalid string position");
    }
    unsigned int remaining = self->_Mysize - position;
    if (remaining < count) {
        count = remaining;
    }
    if (count > 0) {
        memmove(self->_Myptr() + position, self->_Myptr() + position + count, remaining - count);
        self->_Eos(self->_Mysize - count);
    }
    return self;
}
