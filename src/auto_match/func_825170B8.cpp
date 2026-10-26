// Assign a vector of 16-byte values using the system allocator. The element
// copy constructor and the library's range helpers retain their fn_ names.
#include <vector>
#include "game/Allocator_825089A0.h"
struct Element_825170B8;
extern "C" void fn_825179F8(Element_825170B8 *, const Element_825170B8 *);
struct Element_825170B8 {
    Element_825170B8(const Element_825170B8 &other) { fn_825179F8(this, &other); }
    ~Element_825170B8();
    int data[4];
};
typedef Element_825170B8 T;
typedef Allocator_825089A0<T, 0> Allocator;
typedef std::vector<T, Allocator> Vector;
extern "C" {
void fn_82517238(Vector *);
bool fn_82517298(Vector *, unsigned int);
T *fn_82517548(T *, T *, T *);
void fn_82237848(T *, T *, Allocator *);
}
template <> __forceinline void Vector::clear() { fn_82517238(this); }
template <> __forceinline bool Vector::_Buy(size_type n) { return fn_82517298(this, n); }
template <> __forceinline T *std::_Copy_impl<T *, T *>(T *first, T *last, T *dest) {
    return fn_82517548(first, last, dest);
}
template <> __forceinline void std::_Destroy_range<Allocator>(T *first, T *last, Allocator &al) {
    fn_82237848(first, last, &al);
}
extern "C" Vector *fn_825170B8(Vector *self, const Vector *other) {
    *self = *other;
    return self;
}
