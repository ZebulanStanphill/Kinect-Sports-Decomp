// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_824CA378 is a placeholder for the game's 48-byte element type, which
// holds a std::string and five floats.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call the string's copy constructor (fn_8223B688),
// this vector's reserve (fn_824CADA0), operator delete and
// std::_Xlength_error by the names that C units use. <string> already uses the
// copy constructor, so its specialization comes before that header.

#include <xstring>

extern "C" void fn_8223B688(std::string *self, const std::string *other);

template <> __forceinline std::basic_string<char>::basic_string(const std::string &other)
{
    fn_8223B688(this, &other);
}

#include <string>
#include <vector>

struct Element_824CA378 {
    std::string name;
    float unk1C;
    float unk20;
    float unk24;
    float unk28;
    float unk2C;
};

typedef Element_824CA378 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_824CADA0(std::vector<T> *self, unsigned int count);
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
    fn_824CADA0(this, count);
}

template void std::vector<T>::push_back(const T &);
