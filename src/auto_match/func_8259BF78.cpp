// std::vector<T>::reserve from Visual C++ 2010's <vector>. T is unsigned int or
// another 4-byte scalar type. The vector uses Allocator_8259BF78, an allocator
// that only this unit uses. It allocates through std::_Allocate and frees
// through operator delete like std::allocator, but because it is not
// std::allocator, the elements are moved one at a time instead of with memmove.
// The allocator has no name yet, so it is named after this unit. Other units
// call this function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Allocate (fn_82E21DB0), operator delete
// and std::_Xlength_error by the names that C units use.

#include <vector>

typedef unsigned int T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_82E21DB0(unsigned int count, T *);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_82E21DB0(count, (T *)0);
}

template <class Value>
class Allocator_8259BF78 {
public:
    typedef Value value_type;
    typedef Value *pointer;
    typedef Value &reference;
    typedef const Value *const_pointer;
    typedef const Value &const_reference;
    typedef unsigned int size_type;
    typedef int difference_type;

    template <class Other>
    struct rebind {
        typedef Allocator_8259BF78<Other> other;
    };

    Allocator_8259BF78() {}
    template <class Other>
    Allocator_8259BF78(const Allocator_8259BF78<Other> &) {}

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    pointer allocate(size_type count) { return std::_Allocate(count, (pointer)0); }
    void deallocate(pointer block, size_type) { fn_8265CA20(block); }

    void construct(pointer ptr, const Value &value) { ::new ((void *)ptr) Value(value); }
    template <class Other>
    void construct(pointer ptr, Other &&value)
    {
        ::new ((void *)ptr) Value(std::forward<Other>(value));
    }
    void destroy(pointer ptr) { ptr->~Value(); }

    size_type max_size() const
    {
        size_type count = (size_type)-1 / sizeof(Value);
        return 0 < count ? count : 1;
    }
};

typedef std::vector<T, Allocator_8259BF78<T> > Vector;

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_8259BF78(Vector *self, unsigned int count)
{
    self->reserve(count);
}
