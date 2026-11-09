// std::deque<char>::push_back(const char&) from Visual C++ 2010's <deque>,
// written out, for the deque of bytes with the allocator Allocator_825B1970
// whose _Growmap is func_82F54838.cpp. Blocks of sixteen bytes are allocated
// through fn_825B1970. The map grows through the real _Growmap member.
// Converted from the Matching C version so that fn_82F54838 can take its
// member name; it keeps its fn_ name (its caller, func_82F54B28, has no source
// yet).
#include <deque>

extern "C" {
void *fn_825B1970(unsigned int size);
void fn_824B4280(void *block);
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
// _Growmap is func_82F54838.cpp.
template <> void Deque::_Growmap(size_type);

// Gives the out-of-line push_back access to the protected _Growmap.
struct Deque_82F54A70 : Deque {
    using Deque::_Growmap;
};

extern "C" void fn_82F54A70(Deque_82F54A70 *d, const char *v)
{
    if ((d->_Myoff + d->_Mysize) % 16 == 0 && d->_Mapsize <= (d->_Mysize + 16) / 16)
        d->_Growmap(1);
    unsigned int off = d->_Myoff + d->_Mysize;
    unsigned int block = off / 16;
    if (d->_Mapsize <= block)
        block -= d->_Mapsize;
    if (d->_Map[block] == 0)
        d->_Map[block] = d->_Alval.allocate(16);
    d->_Alval.construct(d->_Map[block] + off % 16, *v);
    ++d->_Mysize;
}
