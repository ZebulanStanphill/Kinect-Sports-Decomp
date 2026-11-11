#include <vector>
#include "game/Allocator_825089A0.h"
struct Half_825173B8 { void *ptr; void *rep; };
struct Element_825173B8 { Half_825173B8 first, second; };
typedef std::vector<Element_825173B8, Allocator_825089A0<Element_825173B8, 1> > Vector;
template <> void Vector::reserve(size_type count);
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
template <> void Vector::_Xlen() const { fn_82F622A8("vector<T> too long"); }
struct Access_82517340 : Vector { using Vector::_Reserve; };
extern "C" void fn_82517340(Access_82517340 *self, unsigned count) { self->_Reserve(count); }
