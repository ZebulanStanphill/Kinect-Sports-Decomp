// Builds the path of cultures.txt in a directory: a String_8260D340 (the game
// string class with the heap allocator in game/Allocator_827D8E60.h, a
// placeholder name) holding the directory followed by "cultures.txt", returned
// by value.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 lets it inline as much, and /Oi
// folds the literal's length to 12 as link-time code generation did. Working
// on the string through a reference to its basic_string base gives the
// original's operand order in the inlined append. The string's _Inside is
// std::string's (the linker folded the identical code), called out of line by
// its own name. The string's constructor (func_8260D340), _Grow (func_8256DAE8)
// and append(const basic_string &, size_type, size_type) (func_8260D640) are
// defined in their own units.

// <xstring> calls these directly, so their names are replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <string>
#undef _Xlength_error
#undef _Xout_of_range
#include "game/Allocator_827D8E60.h"

typedef std::basic_string<char, std::char_traits<char>, Allocator_827D8E60<char> > HeapString;

template <> bool std::string::_Inside(const char *ptr);

template <> __forceinline bool HeapString::_Inside(const char *ptr)
{
    return reinterpret_cast<std::string *>(this)->_Inside(ptr);
}

template <> bool HeapString::_Grow(HeapString::size_type newsize, bool trim);
template <> HeapString &HeapString::append(const HeapString &right, HeapString::size_type roff,
                                           HeapString::size_type count);

class String_8260D340 : public HeapString {
public:
    String_8260D340();
};

extern "C" String_8260D340 fn_8260D4E0(const String_8260D340 &dir)
{
    String_8260D340 path;
    HeapString &text = path;
    text.reserve(dir.size() + 12);
    text += dir;
    text += "cultures.txt";
    return path;
}
