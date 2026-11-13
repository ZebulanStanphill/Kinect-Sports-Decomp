// assign(const char *, size_type) of a basic_string<char> whose allocator is the
// heap allocator in game/Allocator_827D8E60.h, from Visual C++ 2010's <xstring>.
// It compiles like std::string::assign (func_82230360) apart from its callees.
// The string's _Inside is std::string's (the linker folded the identical code),
// called out of line by its own name; _Grow (func_8256DAE8) is out of line too.
// The aliasing case calls assign(const basic_string &, pos, count), which keeps
// its fn_ name (fn_8256DA00).
#include <string>
#include <string.h>
#include "game/Allocator_827D8E60.h"

typedef std::basic_string<char, std::char_traits<char>, Allocator_827D8E60<char> > HeapString;

extern "C" HeapString *fn_8256DA00(HeapString *self, const HeapString *right,
                                   unsigned int pos, unsigned int count);

template <> bool std::string::_Inside(const char *ptr);

template <> __forceinline bool HeapString::_Inside(const char *ptr)
{
    return reinterpret_cast<std::string *>(this)->_Inside(ptr);
}

template <> bool HeapString::_Grow(HeapString::size_type newsize, bool trim);

extern "C" HeapString *fn_8256D810(HeapString *self, const char *ptr, unsigned int count)
{
    if (self->_Inside(ptr))
        return fn_8256DA00(self, self, ptr - self->_Myptr(), count);
    if (self->_Grow(count)) {
        memcpy(self->_Myptr(), ptr, count);
        self->_Eos(count);
    }
    return self;
}
