// std::vector<T>::_Reserve(1) from Visual C++ 2010's <vector>. It makes room
// for new elements, growing the capacity by half or to the size needed.
// Element_82491EF0 is a placeholder for the game's 28-byte element type. The
// game's link-time code generation specialized it for push_back's count of 1,
// so this version takes only the vector.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82491D70) by the names that C units use.

#include <vector>

struct Element_82491EF0 {
    int data[7];
};

typedef Element_82491EF0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82491D70(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82491D70(this, count);
}

// _Reserve is protected
struct Access : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_82491EF0(std::vector<T> *self)
{
    static_cast<Access *>(self)->_Reserve(1);
}
