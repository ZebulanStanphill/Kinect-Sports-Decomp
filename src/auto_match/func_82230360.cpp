// std::string::assign(const char *, size_type) from Visual C++ 2010's <xstring>,
// kept under its fn_ name because the Matching func_82230110.c calls it. The
// aliasing case calls assign(const string &, pos, count), which is fn_82230218.
#include <string>
#include <string.h>

extern "C" std::string *fn_82230218(std::string *self, const std::string *right,
                                    unsigned int pos, unsigned int count);

// Out of line in the original (mangled calls).
template <> bool std::string::_Inside(const char *ptr);
template <> bool std::string::_Grow(std::string::size_type newsize, bool trim);

extern "C" std::string *fn_82230360(std::string *self, const char *ptr, unsigned int count)
{
    if (self->_Inside(ptr))
        return fn_82230218(self, self, ptr - self->_Myptr(), count);
    if (self->_Grow(count)) {
        memcpy(self->_Myptr(), ptr, count);
        self->_Eos(count);
    }
    return self;
}
