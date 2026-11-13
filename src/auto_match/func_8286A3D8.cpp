// std::string::insert(size_type, const char *, size_type) from Visual C++ 2010's
// <xstring>, kept under its fn_ name because the Matching func_82879A60.cpp calls it.
#include <string>
#include <string.h>

extern "C" __declspec(noreturn) void fn_82F622E0(const char *msg);
extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

// Out of line in the original (mangled calls).
template <> bool std::string::_Inside(const char *ptr);
template <> std::string &std::string::insert(std::string::size_type off, const std::string &right,
                                             std::string::size_type roff, std::string::size_type count);

extern "C" std::string *fn_8286A3D8(std::string *self, unsigned int off, const char *ptr,
                                    unsigned int count)
{
    unsigned int num;

    if (self->_Inside(ptr))
        return &self->insert(off, *self, ptr - self->_Myptr(), count);
    if (self->_Mysize < off)
        fn_82F622E0("invalid string position");
    if ((unsigned int)-1 - self->_Mysize <= count)
        fn_82F622A8("string too long");
    if (0 < count && self->_Grow(num = self->_Mysize + count)) {
        memmove(self->_Myptr() + off + count, self->_Myptr() + off, self->_Mysize - off);
        memcpy(self->_Myptr() + off, ptr, count);
        self->_Eos(num);
    }
    return self;
}
