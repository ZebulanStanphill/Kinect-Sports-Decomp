// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828E2360 is
// a placeholder for the game's 28-byte element type, which holds an int and a
// std::deque of Item_828E2360. Item_828E2360 is a placeholder for a class with
// a virtual destructor that is more than 8 bytes, so a deque block holds one.
// The element's destructor, which destroys the deque, is inlined. Other units
// call this function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::allocator<T>::allocate stays a call to fn_828D4ED0,
// std::_Uninitialized_move a call to fn_828E2308 and the deque's _Tidy a call
// to fn_828B3E88. The specializations call them, operator delete and
// std::_Xlength_error by the names that C units use.

#include <deque>
#include <vector>

struct Item_828E2360 {
    virtual ~Item_828E2360();
    int data[2];
};

typedef std::deque<Item_828E2360> Deque;

struct Element_828E2360 {
    int unk0;
    Deque unk4;
};

typedef Element_828E2360 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828B3E88(Deque *self);
T *fn_828D4ED0(std::allocator<T> *self, unsigned int count);
T *fn_828E2308(T *first, T *last, T *dest, std::allocator<T> *al);
}

template <> __forceinline void Deque::_Tidy()
{
    fn_828B3E88(this);
}

template <> void std::allocator<std::_Container_proxy>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_828D4ED0(this, count);
}

template <> __forceinline T *std::_Uninitialized_move(T *first, T *last, T *dest,
                                                      std::allocator<T> &al)
{
    return fn_828E2308(first, last, dest, &al);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828E2360(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
