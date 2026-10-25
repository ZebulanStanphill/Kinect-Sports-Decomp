// std::vector<T>::_Reserve from Visual C++ 2010's <vector>. It makes room for
// new elements, growing the capacity by half or to the size needed.
// Element_827D8FB8 is a placeholder for the game's 8-byte element type. C units
// call this function, so it keeps its fn_ name as a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_827D8E60) by the names that C units use.

#include <vector>

struct Element_827D8FB8 {
    int data[2];
};

typedef Element_827D8FB8 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_827D8E60(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_827D8E60(this, count);
}

// _Reserve is protected
struct Access : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_827D8FB8(std::vector<T> *self, unsigned int count)
{
    static_cast<Access *>(self)->_Reserve(count);
}
