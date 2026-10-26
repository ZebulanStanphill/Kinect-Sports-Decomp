// The constructor of a game string class, String_8260D340 (a placeholder name):
// a basic_string<char> with the heap allocator in game/Allocator_827D8E60.h,
// constructed from a default allocator through Visual C++ 2010's
// basic_string(const allocator_type &). The allocator is copied twice, once
// into _String_val's by-value parameter and once into the string, and each copy
// builds a fresh parameter block (fn_82811400) before copying the heap pointer
// and the block.
//
// fn_827DE048 constructs the default allocator in place and returns it; C units
// call it by that name, so DefaultAllocator() passes it a temporary block of
// storage and uses the object it returns.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 lets it inline as much. _Tidy(bool,
// size_type) (fn_8256D798) stays a call by the name that C units use.

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

typedef Allocator_827D8E60<char> HeapAllocator;
typedef std::basic_string<char, std::char_traits<char>, HeapAllocator> HeapString;

extern "C" void fn_8256D798(HeapString *self, bool built, unsigned int newsize);

template <> __forceinline void HeapString::_Tidy(bool built, HeapString::size_type newsize)
{
    fn_8256D798(this, built, newsize);
}

struct AllocatorStorage_8260D340 {
    int words[sizeof(HeapAllocator) / sizeof(int)];

    AllocatorStorage_8260D340() {}
};

extern "C" HeapAllocator *fn_827DE048(AllocatorStorage_8260D340 *where);

static __forceinline const HeapAllocator &DefaultAllocator(
    AllocatorStorage_8260D340 &&where = AllocatorStorage_8260D340())
{
    return *fn_827DE048(&where);
}

class String_8260D340 : public HeapString {
public:
    String_8260D340();
};

String_8260D340::String_8260D340() : HeapString(DefaultAllocator()) {}
