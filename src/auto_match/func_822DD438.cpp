// std::vector<std::string>::reserve from Visual C++ 2010's <vector>.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Allocate (fn_822DC278), the string's
// move constructor (fn_82240378), std::_Destroy_range (fn_822DB718), operator
// delete and std::_Xlength_error by the names that C units use. <string>
// already uses the move constructor, so its specialization comes before that
// header.

#include <xstring>

extern "C" void fn_82240378(std::string *self, std::string *other);

template <> __forceinline std::basic_string<char>::basic_string(std::string &&other)
{
    fn_82240378(this, &other);
}

#include <string>
#include <vector>

typedef std::string T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_822DC278(unsigned int count, T *);
void fn_822DB718(T *first, T *last, std::allocator<T> *al);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_822DC278(count, (T *)0);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al)
{
    fn_822DB718(first, last, &al);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void std::vector<T>::reserve(size_type);
