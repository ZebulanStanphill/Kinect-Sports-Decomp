// std::deque<char, Allocator_825B1970<char>>::_Growmap from Visual C++ 2010's
// <deque>: grows the deque's circular block map. The one-byte element fixes the
// block width at sixteen elements. The map is allocated through fn_825B1970 and
// freed through fn_824B4280, the allocator of func_82F53DB8.cpp, which has no
// name yet and is named after its allocate function. Its only caller is the
// deque's push_back, func_82F54A70.cpp.
#include <deque>

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

    pointer allocate(size_type count) { return (pointer)fn_825B1970(count * sizeof(Value)); }
    void deallocate(pointer block, size_type) { fn_824B4280(block); }

    void construct(pointer ptr, const Value &value) { ::new ((void *)ptr) Value(value); }
    void destroy(pointer ptr) { ptr->~Value(); }

    size_type max_size() const
    {
        size_type count = (size_type)-1 / sizeof(Value);
        return 0 < count ? count : 1;
    }
};

typedef std::deque<char, Allocator_825B1970<char> > Deque;
template <> void Deque::_Xlen() const { fn_82F622A8("deque<T> too long"); }
template void Deque::_Growmap(size_type);
