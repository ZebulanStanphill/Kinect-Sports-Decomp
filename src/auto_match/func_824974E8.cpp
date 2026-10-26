// std::vector<T>::_Insert_n(const_iterator, size_type, const T &) from Visual
// C++ 2010's <vector>. Element_824974E8 is a placeholder for the game's 4-byte
// element type, which holds a float. The vector allocates through
// Allocator_8248F890.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator calls fn_8248F890 and fn_8248F8E8, and the specialization
// calls std::_Xlength_error, by the names that C units use.

#include <vector>

#include "game/Allocator_8248F890.h"

struct Element_824974E8 {
    float data[1];
};

typedef Element_824974E8 T;
typedef std::vector<T, Allocator_8248F890<T> > Vector;

extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void Vector::_Insert_n(const_iterator, size_type, const T &);
