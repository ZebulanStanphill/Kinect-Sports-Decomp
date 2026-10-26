// Insert a byte range into a vector that allocates through the system
// object with allocation category two. Rotation remains an out-of-line call.
#include <vector>
#include <algorithm>
#include "game/Allocator_825089A0.h"
typedef unsigned char Element_82889C00;
typedef Element_82889C00 T;
typedef std::vector<T, Allocator_825089A0<T, 2> > Vector;
extern "C" __declspec(noreturn) void fn_82F622A8(const char *);
extern "C" void fn_82889AB8(T *, T *, T *, int *, T *);
template <> __forceinline void Vector::_Xlen() const { fn_82F622A8("vector<T> too long"); }
template <> __forceinline void std::_Rotate<T *, int, T>(T *first, T *mid, T *last, int *dist, T *val) {
    fn_82889AB8(first, mid, last, dist, val);
}
extern "C" void fn_82889C00(Vector *self, Vector::const_iterator where, T *first, T *last) {
    self->insert(where, first, last);
}
