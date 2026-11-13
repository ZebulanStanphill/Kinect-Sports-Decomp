// std::string::append(const char *, size_type) from Visual C++ 2010's <xstring>,
// kept under its fn_ name because Matching units (func_8234B190.c, func_823A1398.c,
// func_82879A60.cpp) call it. The aliasing case calls append(const string &, pos,
// count), which is fn_8223DEF8.
#include <string>
#include <string.h>

extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);
extern "C" std::string *fn_8223DEF8(std::string *self, const std::string *right,
                                    unsigned int pos, unsigned int count);

// Out of line in the original (mangled call).
template <> bool std::string::_Inside(const char *ptr);

extern "C" std::string *fn_8223DFF0(std::string *self, const char *ptr, unsigned int count)
{
    unsigned int num;

    if (self->_Inside(ptr))
        return fn_8223DEF8(self, self, ptr - self->_Myptr(), count);
    if ((unsigned int)-1 - self->_Mysize <= count)
        fn_82F622A8("string too long");
    if (0 < count && self->_Grow(num = self->_Mysize + count)) {
        memcpy(self->_Myptr() + self->_Mysize, ptr, count);
        self->_Eos(num);
    }
    return self;
}
