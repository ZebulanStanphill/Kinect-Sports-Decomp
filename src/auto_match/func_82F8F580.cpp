// _Ufill of the vector in game/Vec_82F8EEE0.h: constructs count copies of val
// at ptr and returns the position after them. fn_82F8FE48 is the library's
// uninitialized fill, which takes the vector's allocator last.
#include "game/Vec_82F8EEE0.h"

extern "C" void fn_82F8FE48(void **first, unsigned int count, void *const &val, Vec_82F8EEE0 *alloc);

void **Vec_82F8EEE0::_Ufill(void **ptr, unsigned int count, void *const &val)
{
    fn_82F8FE48(ptr, count, val, this);
    return ptr + count;
}
