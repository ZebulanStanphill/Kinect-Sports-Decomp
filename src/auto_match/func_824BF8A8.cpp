// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_824BF8A8 is a placeholder for the game's 8-byte element type. C units
// call this function, so it keeps its fn_ name as a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_824BFB68) by the names that C units use.

#include <vector>

struct Element_824BF8A8 {
    int data[2];
};

typedef Element_824BF8A8 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_824BFB68(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_824BFB68(this, count);
}

extern "C" void fn_824BF8A8(std::vector<T> *self, const T &value)
{
    self->push_back(value);
}
