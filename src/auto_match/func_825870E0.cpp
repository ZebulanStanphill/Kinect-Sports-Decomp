// std::vector<T>::_Insert_n from Visual C++ 2010's <vector>, for the bucket
// vector of a hash container: its elements are iterators into the container's
// list. The linker folded this identical code for every such container
// (fn_82587028, the containers' _Init, is called from 17 places), so the list's
// value type here stands for any of them.
//
// The game was built with link-time code generation, which inlined the
// allocator into this function. The specializations force that inlining and
// call operator new, operator delete and std::_Xlength_error by the names that
// matching C units use.
#include <list>
#include <vector>

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

struct HashValue {};
typedef std::list<HashValue>::iterator Bucket;

template <> __forceinline Bucket *std::_Allocate(size_t count, Bucket *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(Bucket) < count
             || (ptr = fn_8265C9E0(count * sizeof(Bucket))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (Bucket *)ptr;
}

template <> __forceinline Bucket *std::allocator<Bucket>::allocate(size_type count)
{
    return std::_Allocate(count, (Bucket *)0);
}

template <> void std::allocator<Bucket>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<Bucket>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void std::vector<Bucket>::_Insert_n(const_iterator, size_type, const Bucket &);
