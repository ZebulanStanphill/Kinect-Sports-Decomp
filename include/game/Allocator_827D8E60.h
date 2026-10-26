// A standard library allocator that holds a pointer to a heap object and
// allocates through its virtual functions.
//
// The heap's vf0C allocates and vf18 frees; both also take the address of the
// allocator's second member, a 24-byte block of allocation parameters that
// fn_82811400 fills in from one number (16 for this allocator; the Soundscape
// heap in R1/Soundscape/Heap.h builds the same block with 4). Copying the
// allocator first builds a fresh parameter block and then copies the heap
// pointer and the block over it. None of these classes has a name yet, so they
// are named after the first unit matched with them, and the virtual functions
// after their vtable offsets. The same allocator appears in some lists and
// strings.

#ifndef GAME_ALLOCATOR_827D8E60_H
#define GAME_ALLOCATOR_827D8E60_H

#include <new>
#include <utility>

struct Heap_827D8E60 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void *vf0C(unsigned int size, void *context);
    virtual void vf10();
    virtual void vf14();
    virtual void vf18(void *block, void *context);
};

extern "C" void *fn_82811400(void *tag, unsigned int unk);

struct HeapParams_827D8E60 {
    int data[6];

    HeapParams_827D8E60(unsigned int unk = 16) { fn_82811400(this, unk); }
};

template <class T>
class Allocator_827D8E60 {
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
        typedef Allocator_827D8E60<U> other;
    };

    Heap_827D8E60 *heap;
    HeapParams_827D8E60 context;

    Allocator_827D8E60(const Allocator_827D8E60 &other)
    {
        heap = other.heap;
        context = other.context;
    }
    template <class U>
    Allocator_827D8E60(const Allocator_827D8E60<U> &other)
    {
        heap = other.heap;
        context = other.context;
    }

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    pointer allocate(size_type count) { return (pointer)heap->vf0C(count * sizeof(T), &context); }
    void deallocate(pointer block, size_type) { heap->vf18(block, &context); }

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

#endif
