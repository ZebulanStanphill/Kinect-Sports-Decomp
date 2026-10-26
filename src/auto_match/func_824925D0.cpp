// The copy constructor of Struct_824925D0, a game type that holds a
// std::vector and three bytes. It is the same as the implicit copy
// constructor, which inlines the vector's copy constructor. Struct_824925D0
// and Flags_824925D0 are placeholders, and so is Element_824925D0, the
// vector's 28-byte element type. The element is byte-aligned, so each one is
// copied with memcpy. The vector allocates through Allocator_8248F890.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator calls fn_8248F890 and fn_8248F8E8, and the specialization
// calls std::_Xlength_error, by the names that C units use.

#include <vector>

#include "game/Allocator_8248F890.h"

struct Element_824925D0 {
    unsigned char data[28];
};

typedef Element_824925D0 T;
typedef std::vector<T, Allocator_8248F890<T> > Vector;

extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

struct Flags_824925D0 {
    unsigned char unk0;
    unsigned char unk1;
    unsigned char unk2;
};

struct Struct_824925D0 {
    Struct_824925D0(const Struct_824925D0 &other);
    Vector items;
    Flags_824925D0 flags;
};

Struct_824925D0::Struct_824925D0(const Struct_824925D0 &other)
    : items(other.items), flags(other.flags)
{
}
