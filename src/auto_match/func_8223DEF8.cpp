#include <string>
#include <string.h>

extern "C" __declspec(noreturn) void fn_82F622E0(const char *msg);
extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

extern "C" std::string *fn_8223DEF8(std::string *self, const std::string *right,
                                    unsigned int pos, unsigned int count)
{
    unsigned int num;

    if (right->_Mysize < pos)
        fn_82F622E0("invalid string position");
    num = right->_Mysize - pos;
    if (num < count)
        count = num;
    if ((unsigned int)-1 - self->_Mysize <= count)
        fn_82F622A8("string too long");
    if (0 < count && self->_Grow(num = self->_Mysize + count)) {
        memcpy(self->_Myptr() + self->_Mysize, right->_Myptr() + pos, count);
        self->_Eos(num);
    }
    return self;
}
