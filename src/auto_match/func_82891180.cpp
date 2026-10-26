// Append a two-byte value to a deque using system allocator category 1.
// Map growth stays out of line under its configured function name.
#include <deque>
#include "game/Allocator_825089A0.h"
typedef unsigned short Element_82891180;
typedef std::deque<Element_82891180, Allocator_825089A0<Element_82891180,1> > Deque;
extern "C" void fn_8288FE00(Deque *, unsigned int);
template <> __forceinline void Deque::_Growmap(size_type count) {
    fn_8288FE00(this, count);
}
extern "C" void fn_82891180(Deque *self, const Element_82891180 *value) {
    self->push_back(*value);
}
