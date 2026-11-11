// std::vector<T>::_Reserve from Visual C++ 2010's <vector> for the vector whose
// reserve is fn_82F53DB8 (Element_82F53DB8, 8-byte elements, allocator
// Allocator_825B1970; see func_82F53DB8.cpp).

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

template <> void Vector::reserve(size_type count);

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

struct Access_82F53EA0 : Vector { using Vector::_Reserve; };
extern "C" void fn_82F53EA0(Access_82F53EA0 *self, unsigned count) { self->_Reserve(count); }
