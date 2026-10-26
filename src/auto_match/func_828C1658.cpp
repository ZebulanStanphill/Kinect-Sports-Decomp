// Insert a reference-counted value into a list using system allocator
// category 2. Element_828C1658 stands in for the two-word ownership value.
namespace std { extern "C" __declspec(noreturn) void fn_82F622A8(const char *); }
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"
struct Element_828C1658;
extern "C" void fn_82517978(Element_828C1658 *, void *, void *, bool);
struct Element_828C1658 {
    void *ptr; void *control;
    Element_828C1658(const Element_828C1658 &other) : ptr(0), control(0) {
        fn_82517978(this, other.ptr, other.control, false);
    }
};
typedef std::list<Element_828C1658, Allocator_825089A0<Element_828C1658,2> > List;
extern "C" void fn_828C1658(List *self, List::const_iterator where,
                            const Element_828C1658 *value)
{
    self->_Insert(where, *value);
}
