// std::vector<T, Allocator>::operator= from Visual C++ 2010's <vector>.
// Element_82496080 is a placeholder for the game's 28-byte element type: a
// short, three shorts, a float and eight shorts. The vector allocates through
// Allocator_8248F890.
//
// The original copies elements with memcpy but assigns them one field at a
// time. That happens when the element has an implicit copy constructor and
// assignment operator but members with user-written assignment operators,
// which are the placeholders Shorts3_82496080 and Shorts8_82496080 here.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. This vector's clear stays a call to fn_824967B0. The allocator calls
// fn_8248F890 and fn_8248F8E8, and the specializations call fn_824967B0 and
// std::_Xlength_error, by the names that C units use.

#include <vector>

#include "game/Allocator_8248F890.h"

struct Shorts3_82496080 {
    Shorts3_82496080 &operator=(const Shorts3_82496080 &other);
    unsigned short data[3];
};

inline Shorts3_82496080 &Shorts3_82496080::operator=(const Shorts3_82496080 &other)
{
    data[0] = other.data[0];
    data[1] = other.data[1];
    data[2] = other.data[2];
    return *this;
}

struct Shorts8_82496080 {
    Shorts8_82496080 &operator=(const Shorts8_82496080 &other);
    unsigned short data[8];
};

inline Shorts8_82496080 &Shorts8_82496080::operator=(const Shorts8_82496080 &other)
{
    data[0] = other.data[0];
    data[1] = other.data[1];
    data[2] = other.data[2];
    data[3] = other.data[3];
    data[4] = other.data[4];
    data[5] = other.data[5];
    data[6] = other.data[6];
    data[7] = other.data[7];
    return *this;
}

struct Element_82496080 {
    unsigned short unk0;
    Shorts3_82496080 unk2;
    float unk8;
    Shorts8_82496080 unkC;
};

typedef Element_82496080 T;
typedef std::vector<T, Allocator_8248F890<T> > Vector;

extern "C" {
void fn_824967B0(Vector *self);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> __forceinline void Vector::clear()
{
    fn_824967B0(this);
}

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template Vector &Vector::operator=(const Vector &);
