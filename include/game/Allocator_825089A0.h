// The object fn_825089A0 returns, and the standard library allocator that
// allocates from it.
//
// fn_825089A0 constructs a static object on first use and returns it. Its
// virtual functions include allocation (vf24) and freeing (vf28); other units
// call it for other services, such as reading a clock. Neither class has a
// name yet: they are named after fn_825089A0, and the virtual functions after
// their vtable offsets.
//
// Containers that use Allocator_825089A0 call vf24 with the size in bytes and
// a constant 0, 1 or 2 that differs between containers, so it is a template
// parameter here. The allocation is not checked for failure.

#ifndef GAME_ALLOCATOR_825089A0_H
#define GAME_ALLOCATOR_825089A0_H

#include <new>
#include <utility>

struct System_825089A0 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void *vf24(unsigned int size, int category);
    virtual void vf28(void *block);
};

extern "C" System_825089A0 *fn_825089A0();

template <class T, int Category>
class Allocator_825089A0 {
public:
    typedef T value_type;
    typedef T *pointer;
    typedef T &reference;
    typedef const T *const_pointer;
    typedef const T &const_reference;
    typedef unsigned int size_type;
    typedef int difference_type;

    template <class U>
    struct rebind {
        typedef Allocator_825089A0<U, Category> other;
    };

    Allocator_825089A0() {}
    template <class U>
    Allocator_825089A0(const Allocator_825089A0<U, Category> &) {}

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    pointer allocate(size_type count)
    {
        return (pointer)fn_825089A0()->vf24(count * sizeof(T), Category);
    }
    void deallocate(pointer block, size_type) { fn_825089A0()->vf28(block); }

    void construct(pointer ptr, const T &value) { ::new ((void *)ptr) T(value); }
    template <class U>
    void construct(pointer ptr, U &&value)
    {
        ::new ((void *)ptr) T(std::forward<U>(value));
    }
    void destroy(pointer ptr) { ptr->~T(); }

    size_type max_size() const
    {
        size_type count = (size_type)-1 / sizeof(T);
        return 0 < count ? count : 1;
    }
};

template <class T, class U, int Category>
bool operator==(const Allocator_825089A0<T, Category> &, const Allocator_825089A0<U, Category> &)
{
    return true;
}

template <class T, class U, int Category>
bool operator!=(const Allocator_825089A0<T, Category> &, const Allocator_825089A0<U, Category> &)
{
    return false;
}

#endif
