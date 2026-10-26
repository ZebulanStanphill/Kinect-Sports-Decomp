// std::vector<T>::push_back(T &&) from Visual C++ 2010's <vector>. T is
// std::pair<int, std::tr1::shared_ptr<Pointee_823B4030> >, which is moved into
// place; Pointee_823B4030 is a placeholder for the type the pointer owns.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. This vector's reserve stays a call to fn_823B4230. The specializations
// call it, operator delete and std::_Xlength_error by the names that C units
// use.

#include <memory>
#include <utility>
#include <vector>

struct Pointee_823B4030;

typedef std::pair<int, std::tr1::shared_ptr<Pointee_823B4030> > T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_823B4230(std::vector<T> *self, unsigned int count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_823B4230(this, count);
}

template void std::vector<T>::push_back(T &&);
