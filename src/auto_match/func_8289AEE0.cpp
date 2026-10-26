// Clears a list of type-erased callbacks and frees its nodes through the
// system allocator. The callback's destructor releases its implementation,
// passing whether the implementation lies outside its small-object storage.
// The list uses Visual C++ 2010's std::tr1::function<void()> and category 0
// stands in for the allocation category, which this function does not use.
// The larger inlining limit reproduces the game's link-time inlining.

#include <list>
#include <functional>
#include "game/Allocator_825089A0.h"
typedef std::tr1::function<void()> Element_8289AEE0;
typedef std::list<Element_8289AEE0, Allocator_825089A0<Element_8289AEE0, 0> > List;
extern "C" void fn_8289AEE0(List *self) { self->clear(); }
