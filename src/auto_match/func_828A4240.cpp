// Resize the system-allocated deque, appending zero-valued elements.
#include <deque>
#include "game/Allocator_825089A0.h"
typedef unsigned int Element_828A4240;
typedef std::deque<Element_828A4240, Allocator_825089A0<Element_828A4240, 1> > Deque;
extern "C" void fn_828A3658(Deque *, unsigned int);
extern "C" void *fn_828C5A90(void *, Deque *, const Deque::const_iterator *, const Deque::const_iterator *);
template <> __forceinline void Deque::_Growmap(size_type n) { fn_828A3658(this, n); }
template <> __forceinline Deque::iterator Deque::erase(const_iterator a, const_iterator b) {
 unsigned int result[3]; return *(iterator *)fn_828C5A90(result, this, &a, &b);
}
extern "C" void fn_828A4240(Deque *self, unsigned int n) { self->resize(n); }
