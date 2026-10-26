// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_82F53DB8 is
// a placeholder for the game's 8-byte element type.
//
// The vector uses an allocator that only this unit uses. It passes the size in
// bytes to fn_825B1970 and frees through fn_824B4280, which jump straight to
// the game heap's allocate and free (fn_82522D98 and fn_82522ED8); neither
// checks for failure. The allocator has no name yet, so it is named after its
// allocate function.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator and the specialization call fn_825B1970, fn_824B4280 and
// std::_Xlength_error by the names that C units use.

#include <vector>

extern "C" {
void *fn_825B1970(unsigned int size);
void fn_824B4280(void *block);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <class Value>
class Allocator_825B1970 {
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
        typedef Allocator_825B1970<Other> other;
    };

    Allocator_825B1970() {}
    template <class Other>
    Allocator_825B1970(const Allocator_825B1970<Other> &) {}

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    pointer allocate(size_type count) { return (pointer)fn_825B1970(count * sizeof(Value)); }
    void deallocate(pointer block, size_type) { fn_824B4280(block); }

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

struct Element_82F53DB8 {
    int data[2];
};

typedef Element_82F53DB8 T;
typedef std::vector<T, Allocator_825B1970<T> > Vector;

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void Vector::reserve(size_type);
