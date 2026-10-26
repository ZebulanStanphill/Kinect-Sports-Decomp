// A standard library allocator that allocates through fn_8248F890 and frees
// through fn_8248F8E8.
//
// fn_8248F890 sets the current thread's memory context to 2 around the
// allocation (through a per-thread table at lbl_8326B7D0) and returns the
// block. Neither function checks for failure. The allocator has no name yet,
// so it is named after its allocate function.
//
// Because this is not std::allocator, the library copies scalar elements one
// at a time instead of with memmove.

#ifndef GAME_ALLOCATOR_8248F890_H
#define GAME_ALLOCATOR_8248F890_H

#include <new>
#include <utility>

extern "C" {
void *fn_8248F890(unsigned int size);
void fn_8248F8E8(void *block);
}

template <class T>
class Allocator_8248F890 {
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
        typedef Allocator_8248F890<U> other;
    };

    Allocator_8248F890() {}
    template <class U>
    Allocator_8248F890(const Allocator_8248F890<U> &) {}

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    pointer allocate(size_type count) { return (pointer)fn_8248F890(count * sizeof(T)); }
    void deallocate(pointer block, size_type) { fn_8248F8E8(block); }

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

template <class T, class U>
bool operator==(const Allocator_8248F890<T> &, const Allocator_8248F890<U> &)
{
    return true;
}

template <class T, class U>
bool operator!=(const Allocator_8248F890<T> &, const Allocator_8248F890<U> &)
{
    return false;
}

#endif
