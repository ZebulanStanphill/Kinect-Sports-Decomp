// std::vector<T>::push_back(T &&) from Visual C++ 2010's <vector>, where T is
// std::pair<std::string, std::string>. Moving the pair moves both strings.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call the string's move constructor (fn_82240378),
// this vector's reserve (fn_82326B18), operator delete and
// std::_Xlength_error by the names that C units use. <string> already uses the
// move constructor, so its specialization comes before that header.

#include <xstring>

extern "C" void fn_82240378(std::string *self, std::string *other);

template <> __forceinline std::basic_string<char>::basic_string(std::string &&other)
{
    fn_82240378(this, &other);
}

#include <string>
#include <utility>
#include <vector>

typedef std::pair<std::string, std::string> T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82326B18(std::vector<T> *self, unsigned int count);
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
    fn_82326B18(this, count);
}

template void std::vector<T>::push_back(T &&);
